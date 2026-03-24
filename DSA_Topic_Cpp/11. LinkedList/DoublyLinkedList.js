class Node {
  constructor(val, next, prev) {
    this.val = val;
    this.next = null;
    this.prev = null;
  }
}

class LinkedList {
  size = 0;
  constructor() {
    this.head = null;
  }

  addAtHead(data) {
    const newNode = new Node(data);
    let current = this.head;
    this.head = newNode;
    newNode.next = current;
    this.size++;
  }

  addAtTail(data) {
    const newNode = new Node(data);

    if (this.head === null) {
      this.addAtHead(newNode);
    } else {
      let current = this.head;
      while (current.next !== null) {
        current = current.next;
      }
      current.next = newNode;
      newNode.prev = current;
    }

    this.size++;
  }

  addAtindex(data, index) {
    if (index < 0 || index > this.size) {
      throw new RangeError("Index out of bounds");
    }
    if (index === 0) {
      this.addAtHead(data);
      return;
    } else if (index === this.size) {
      this.addAtTail(data);
      return;
    }
    const newNode = new Node(data);
    let current = this.head;
    let i = 0;
    while (current.next !== null) {
      i++;
      if (i === index) {
        let temp = current.next;
        current.next = newNode;
        newNode.next = temp;
        newNode.prev = current;
        break;
      }
      current = current.next;
    }
    this.size++;
  }

  deleteAtHead() {
    this.head = this.head.next;
    this.size--;
  }

  deleteAtTail() {
    let current = this.head;
    while (current.next.next !== null) {
      current = current.next;
    }
    current.next = null;
    this.size--;
  }

  deleteAtIndex(index) {
    let current = this.head;
    for (let i = 0; i < index - 1; i++) {
      current = current.next;
    }
    let temp = current;
    current.next = temp.next.next;
    temp = temp.next.next;
    temp.prev = temp.prev.prev;
  }

  getAtIndex(index) {
    if (index < 0 || index > this.size) {
      throw new RangeError("Index out of bounds");
    }
    if (index === 0) {
      return this.head.data;
    } else if (index === this.size) {
      let current = this.head;
      while (current.next !== null) {
        current = current.next;
      }
      return current.data;
    }
    let current = this.head;
    for (let i = 0; i < index; i++) {
      current = current.next;
    }
    return current.data;
  }
}

let a = new LinkedList();
a.addAtHead(3);
a.addAtHead(4);
a.addAtHead(5);
a.addAtHead(6);
a.addAtTail(7);
a.addAtindex(8, 3);
a.deleteAtIndex(3);

/*
function printReverse(head) {
  if (!head) return;

  let temp = head;

  // Move to last node
  while (temp.next !== null) {
    console.log(temp.val);
    temp = temp.next;
  }

  // Traverse backward
  while (temp !== null) {
    console.log(temp.val);
    temp = temp.prev;
  }
}

*/

function print(a) {
  if (a === null) return;
  console.log(a.val);
  print(a.next);
}
print(a.head);

/**
 * get - tail, head
 */

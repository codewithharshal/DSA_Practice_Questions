class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
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
      this.head = newNode;
    } else {
      let current = this.head;
      while (current.next !== null) {
        current = current.next;
      }
      current.next = newNode;
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
        break;
      }
      current = current.next;
    }
    this.size++;
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
  }

  getSize() {
    return this.size;
  }

  print() {
    let temp = this.head;
    while (temp != null) {
      console.log(temp.data);
      temp = temp.next;
    }
  }
}

const LL = new LinkedList();
LL.addAtHead(10);
LL.addAtHead(20);
LL.addAtHead(30);
LL.addAtHead(40);
LL.addAtTail(50);
LL.addAtTail(70);
LL.addAtindex(4, 0);
LL.addAtindex(9, 7);
// LL.deleteAtHead();
// LL.deleteAtTail();
LL.deleteAtIndex(3);
// console.log("At Index: ", LL.getAtIndex(5));

console.log("Size: ", LL.getSize());
LL.print();

// function printR(head) {
//   if (head === null) {
//     return;
//   }
//   console.log(head.data);
//   printR(head.next);
// }

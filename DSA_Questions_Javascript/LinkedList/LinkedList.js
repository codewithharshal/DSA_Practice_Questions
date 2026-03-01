class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  //   Add at head
  addAtHead(data) {
    const newNode = new Node(data);
    let current = this.head;
    this.head = newNode;
    newNode.next = current;
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
LL.print();

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {
    private Node head;

    public LinkedList() {
        head = null;
    }

    public void insertAtHead(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }

    public void insertAtTail(int val) {
        Node newNode = new Node(val);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    public void deleteValue(int val) {
        if (head == null) return;

        if (head.data == val) {
            head = head.next;
            return;
        }

        Node temp = head;

        while (temp.next != null && temp.next.data != val) {
            temp = temp.next;
        }

        if (temp.next == null) return;

        temp.next = temp.next.next;
    }

    public void print() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
    }
}

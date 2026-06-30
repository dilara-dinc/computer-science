#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void deleteValue(int val) {
        if (head == nullptr) return;

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == nullptr) return;

        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }

    void print() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

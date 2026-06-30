#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int topIndex;

public:
    Stack(int size = 100) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if (topIndex == capacity - 1) return;
        arr[++topIndex] = val;
    }

    void pop() {
        if (topIndex == -1) return;
        topIndex--;
    }

    int top() {
        if (topIndex == -1) return -1;
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

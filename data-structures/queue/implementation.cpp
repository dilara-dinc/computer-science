#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int capacity;
    int size;

public:
    Queue(int cap = 100) {
        capacity = cap;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = -1;
        size = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int val) {
        if (size == capacity) return;

        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = val;
        size++;
    }

    void dequeue() {
        if (size == 0) return;

        frontIndex = (frontIndex + 1) % capacity;
        size--;
    }

    int front() {
        if (size == 0) return -1;
        return arr[frontIndex];
    }

    bool isEmpty() {
        return size == 0;
    }
};

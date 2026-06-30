#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
    }

public:
    DynamicArray() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void push_back(int val) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = val;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        return arr[index];
    }

    int getSize() {
        return size;
    }
};

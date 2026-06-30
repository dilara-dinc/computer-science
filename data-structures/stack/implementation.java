public class Stack {
    private int[] arr;
    private int capacity;
    private int top;

    public Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    public void push(int val) {
        if (top == capacity - 1) return;
        arr[++top] = val;
    }

    public void pop() {
        if (top == -1) return;
        top--;
    }

    public int top() {
        if (top == -1) return -1;
        return arr[top];
    }

    public boolean isEmpty() {
        return top == -1;
    }
}

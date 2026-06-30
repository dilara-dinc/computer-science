public class Queue {
    private int[] arr;
    private int front;
    private int rear;
    private int size;
    private int capacity;

    public Queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    public void enqueue(int val) {
        if (size == capacity) return;

        rear = (rear + 1) % capacity;
        arr[rear] = val;
        size++;
    }

    public void dequeue() {
        if (size == 0) return;

        front = (front + 1) % capacity;
        size--;
    }

    public int front() {
        if (size == 0) return -1;
        return arr[front];
    }

    public boolean isEmpty() {
        return size == 0;
    }
}

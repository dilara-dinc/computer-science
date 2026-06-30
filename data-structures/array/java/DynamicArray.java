public class DynamicArray {
    private int[] arr;
    private int capacity;
    private int size;

    public DynamicArray() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    private void resize() {
        capacity *= 2;
        int[] newArr = new int[capacity];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        arr = newArr;
    }

    public void pushBack(int value) {
        if (size == capacity) resize();
        arr[size++] = value;
    }

    public void popBack() {
        if (size > 0) size--;
    }

    public int get(int index) {
        if (index < 0 || index >= size) return -1;
        return arr[index];
    }

    public int getSize() {
        return size;
    }

    public void print() {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

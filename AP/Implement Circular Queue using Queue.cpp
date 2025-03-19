class MyCircularQueue {
private:
    vector<int> q;
    int front, rear, size, capacity;
    
public:
    MyCircularQueue(int k) {
        q.resize(k);
        front = rear = -1;
        capacity = k;
        size = 0;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) front = 0;
        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % capacity;
        size--;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : q[front];
    }

    int Rear() {
        return isEmpty() ? -1 : q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

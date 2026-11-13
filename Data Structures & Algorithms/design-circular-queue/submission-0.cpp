
class MyCircularQueue {
public:
    int s = -1;
    int m = 0;
    int n = 0;
    vector<int> que;

    MyCircularQueue(int k) {
        m = k;
        que.resize(k);
    }

    bool enQueue(int value) {
        if(s-n >= m-1)
            return false;

        s++;
        que[s % m] = value;
        return true;
    }

    bool deQueue() {
        if(s-n < 0)
            return false;

        n++;
        return true;
    }

    int Front() {
        if(s-n < 0)
            return -1;

        return que[n % m];
    }

    int Rear() {
        if(s-n < 0)
            return -1;

        return que[s % m];
    }

    bool isEmpty() {
        return s-n < 0;
    }

    bool isFull() {
        return s-n >= m-1;
    }
};

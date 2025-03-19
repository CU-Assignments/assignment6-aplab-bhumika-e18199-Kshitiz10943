class PriorityQueueStack {
private:
    stack<int> s;

public:
    void push(int x) {
        stack<int> temp;
        while (!s.empty() && s.top() > x) {
            temp.push(s.top());
            s.pop();
        }
        s.push(x);
        while (!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }

    int pop() {
        int val = s.top();
        s.pop();
        return val;
    }

    int top() {
        return s.top();
    }

    bool empty() {
        return s.empty();
    }
};

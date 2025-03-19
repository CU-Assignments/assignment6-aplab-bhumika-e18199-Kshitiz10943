class MinStack {
private:
    stack<int> s, minS;
    
public:
    MinStack() {}

    void push(int x) {
        s.push(x);
        if (minS.empty() || x <= minS.top()) minS.push(x);
    }

    void pop() {
        if (s.top() == minS.top()) minS.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minS.top();
    }
};

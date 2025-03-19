class MaxStack {
private:
    stack<int> s, maxS;
    
public:
    MaxStack() {}

    void push(int x) {
        s.push(x);
        if (maxS.empty() || x >= maxS.top()) maxS.push(x);
    }

    void pop() {
        if (s.top() == maxS.top()) maxS.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMax() {
        return maxS.top();
    }
};

class MyDeque {
private:
    stack<int> frontStack, backStack;
    
public:
    MyDeque() {}

    void pushFront(int x) {
        frontStack.push(x);
    }

    void pushBack(int x) {
        backStack.push(x);
    }

    int popFront() {
        if (frontStack.empty()) {
            while (!backStack.empty()) {
                frontStack.push(backStack.top());
                backStack.pop();
            }
        }
        int val = frontStack.top();
        frontStack.pop();
        return val;
    }

    int popBack() {
        if (backStack.empty()) {
            while (!frontStack.empty()) {
                backStack.push(frontStack.top());
                frontStack.pop();
            }
        }
        int val = backStack.top();
        backStack.pop();
        return val;
    }

    bool empty() {
        return frontStack.empty() && backStack.empty();
    }
};


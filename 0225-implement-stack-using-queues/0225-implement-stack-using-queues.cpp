class MyStack {
public:
    queue<int> q;

    MyStack() {
    }

    void push(int x) {
        q.push(x);
        int size = q.size();

        for (int i = 0; i < size - 1; i++) {
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
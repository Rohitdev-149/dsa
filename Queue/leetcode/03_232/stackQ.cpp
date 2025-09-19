class MyQueue {
    public:
        stack<int> s;
        stack<int> helper;
    
        MyQueue() {}
    
        void push(int x) { s.push(x); }
    
        int pop() {
            // remove from bottom in stack
            while (!s.empty()) {
                helper.push(s.top());
    
                s.pop();
            }
            int x = helper.top();
            helper.pop();
            while (!helper.empty()) {
                s.push(helper.top());
                helper.pop();
            }
            return x;
        }
    
        int peek() {
            //retrieve the last element from stack
            while (!s.empty()) {
                helper.push(s.top());
    
                s.pop();
            }
            int x = helper.top();
    
            while (!helper.empty()) {
                s.push(helper.top());
                helper.pop();
            }
            return x;
        }
    
        bool empty() {
            if (s.size() == 0)
                return true;
            else
                return false;
        }
    };
    
  
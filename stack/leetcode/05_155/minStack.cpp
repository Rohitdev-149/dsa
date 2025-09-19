/*

class MinStack {
public:
    stack<long long> st;
    long min;
    MinStack() { min=LLONG_MAX; }

    void push(int val) {
        long long x= (long long)val;
        if (st.size() == 0) {
            st.push(x);
            min = x;
        } else if (x > min)
            st.push(x);
        else {
            st.push(2 * x - min);
            min = x;
        }
    }

    void pop() {
        if (st.top() < min) {
            // st.top()<min -> Fake value is present
            // before popping -> retrieve the old min val
            int oldMin = 2 * min - st.top();
            min = oldMin;
        }

        st.pop();
    }


    int top() {
        if(st.top()<min) return min;
        else return st.top();
}

int getMin() {
    return min;
}
}
;

*/
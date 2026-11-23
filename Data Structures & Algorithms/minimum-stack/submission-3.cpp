class MinStack {
private:
    stack<long> st;
    long min;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(0);
            min = val;
        }    
        else{
            st.push(val - min);
            if(val < min) min = val;
        }
    }
    
    void pop() {
        if(st.empty())return;

        long pop = st.top();
        if(pop < 0) min = min - pop;
        st.pop();

    }
    
    int top() {
        return (st.top() >= 0)? st.top() + min : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};

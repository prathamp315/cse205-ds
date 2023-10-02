class MinStack {
public:
    stack<int> stack,min;  
    MinStack() {
        
    }
    void push(int val) {
       if(min.empty() || val<=min.top()){  
           min.push(val);
       }
        stack.push(val);
    }
    
    void pop() {
      if(min.top()==stack.top()){  
          min.pop();
      }
        stack.pop();
    }
    
    int top() {
       return stack.top();
        
    }
    int getMin() {
        return min.top();
    }
};
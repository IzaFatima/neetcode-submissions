class MinStack {
    private:
    vector<int> stackVec;
    vector<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stackVec.push_back(val);
        if(minstack.empty()|| val<=minstack.back()){
            minstack.push_back(val);
        }else{
            minstack.push_back(minstack.back());
        }
    }
    
    void pop() {
        if(!stackVec.empty()){
stackVec.pop_back();
minstack.pop_back();
        }
        
    }
    
    int top() {
        return stackVec.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};

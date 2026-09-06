class StockSpanner {
public:
    stack<int> st;
    vector<int> a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 1;
        while(!st.empty() && st.top()<=price){
            ans++;
            a.push_back(st.top());
            st.pop();
        }
        for(int i=a.size()-1; i>=0;i--){
            st.push(a[i]);
            a.pop_back();
        }
        st.push(price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
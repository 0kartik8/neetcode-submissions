class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> temp(n,0); 
        st.push(temperatures[0]);
        int l = 0, a = 1;
        for(int i = 1; i< n ; i++){
            l = i-1;
            while(st.size()!=0 && temperatures[i]>st.top()){
                st.pop();
                while(temp[l] != 0){
                    l--;
                    a++;
                }
                temp[l] = a;
                l--;
                a++;
            }
            a=1;    
            st.push(temperatures[i]);
        }
        return temp;
    }
};

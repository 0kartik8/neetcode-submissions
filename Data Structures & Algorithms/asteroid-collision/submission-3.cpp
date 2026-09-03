class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        st.push(asteroids[0]);
        for(int i=1; i< asteroids.size();i++){
            while(st.size() != 0 && asteroids[i]<0 && st.top()>=0 && asteroids[i]<(-1*st.top())){
                st.pop();
            }
            if(st.size() != 0 && asteroids[i]<0 && st.top()>=0 && asteroids[i]==(-1*st.top())){
                st.pop();
                continue;
            }
            if(st.size() == 0){
                st.push(asteroids[i]);
                continue;
            }
            if(st.size() != 0 && asteroids[i]>0 && st.top()<0 ){
                st.push(asteroids[i]);
                continue;
            }
            if(st.size() == 0){
                st.push(asteroids[i]);
                continue;
            }
            if(asteroids[i]>=0 && st.top()>=0 ){
                st.push(asteroids[i]);
                continue;
            }
            if(asteroids[i]<0 && st.top()<0){
                st.push(asteroids[i]);
                continue;
            }
                     
        }
        int n = st.size();
        vector<int> ans(n,0);
        if(n==0)
            return ans;
        for(int j =n-1; j>=0;j--){
            ans[j] = st.top();
            st.pop();
        }
        return ans;
    }
};
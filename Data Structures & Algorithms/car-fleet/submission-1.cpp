class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n  = speed.size();
        if(n==1)
            return 1;
        vector<pair<int,float>> st;
        for(int i=0; i<n; i++){
            float t = (float)(target- position[i])/speed[i];
            st.push_back({position[i],t});
        }
        sort(st.begin(),st.end());
        float max = st[n-1].second;
        st.pop_back();
        int count = 1;
        if(st.size() >= 1){
            for(int i = n-2; i>=0; i--){
                if(st[i].second>max){
                    max = st[i].second;
                    count++;
                }
                st.pop_back();
            }
        }
        return count;
    }
};

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        vector<int> pile = piles;
        int l = 1;
        int mid = 0;
        int i = 0;
        int ans = piles[0];
        for(int j=1;j<piles.size();j++){
            ans = max(ans,piles[j]);
        }
        int r = ans;
        while(l<=r){
            mid = l+ (r-l)/2;
            int k =h;
            for(i =0;i<piles.size();i++){
                k -= (piles[i] + mid - 1) / mid;
            }
            piles = pile;
            if(k>=0){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};

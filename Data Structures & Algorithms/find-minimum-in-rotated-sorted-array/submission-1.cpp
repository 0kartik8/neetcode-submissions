class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l=0,r=n-1,m;
        int ans = nums[r];
        while(l<r){
            m = l + (r-l)/2;
            if(nums[r]<=nums[m] && nums[r] <= nums[l]){
                ans = min(ans,nums[r]);
                l = m+1;
                continue;
            }
            else if(nums[l]<=nums[m] && nums[l] <= nums[r]){
                ans = min(ans,nums[l]);
                
            }
            else if(nums[m]<= nums[r] && nums[m] <= nums[l]){
                ans = min(ans,nums[m]);
            }
            r = m-1;
        }
        return ans;
    }
};

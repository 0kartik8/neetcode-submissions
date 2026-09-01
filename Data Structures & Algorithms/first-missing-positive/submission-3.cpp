class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,1);
        for(int i =0; i<n; i++){
            if(nums[i] <= n && nums[i] > 0){
                arr[nums[i]-1] = 0;
            }
        }
        for(int i =0; i<n; i++){
            if(arr[i] == 1)
                return i+1;
        }
        return n+1;
    }
};
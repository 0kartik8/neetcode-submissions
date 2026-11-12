class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> arr(nums.size()+1,0);
        for(int i =1; i< nums.size()+1;i++){
            arr[nums[i-1]]++;
        }
        for(int i =0; i< nums.size();i++){
            if(arr[i] > 1)
                return i;
        }
        return nums.size()+1;
    }
};

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int k = 1;
        for(int i = 0; i< n ;i++){
            while(nums[i]<1){
                i++;
                if(i==n)
                    return 1;
            }
            if(nums[i] != k)
                continue;
            k++;
        }
        return k;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        else if(n==1)
            return 1;

        unordered_set<int> Hset;
        for(int i =0; i<n; i++){
            Hset.insert(nums[i]);
        }
        n = Hset.size();
        
        int count = 1;
        int ans = 1;
        for(int i =0; i<n; i++){
            int a = nums[i]-1;
            while(Hset.count(a)){
                count++;
                Hset.erase(a);
                a--;
            }
            int b = nums[i] +1;
            while(Hset.count(b)){
                count++;
                Hset.erase(b);
                b++;
            }
            ans = max(ans,count);
            count = 1;
        }
        return ans;
    }
};

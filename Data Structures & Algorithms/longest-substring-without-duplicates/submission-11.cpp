class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        unordered_map<char,int> Hmap;
        int a = 0,ans = 0,b=0;
        for(int i=0; i<n; i++){
            if(Hmap.contains(s[i]) && Hmap[s[i]] >= a){
                b=1;
                a = Hmap[s[i]]+1;
            }
            Hmap[s[i]] = i;
            ans = max(ans,i-a+1);
            
        }
        if(b==0)
            return n;
        return ans;
    }
};

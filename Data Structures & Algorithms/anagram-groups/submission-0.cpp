class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> str = strs;
        for(int i = 0; i < strs.size(); i++){
            sort(str[i].begin(),str[i].end());
        }
        unordered_map<string,vector<string>> Hmap;
        for(int i=0;i<strs.size();i++){
            Hmap[str[i]].push_back(strs[i]);
        }
        vector<vector<string>> s(Hmap.size());
        int i = 0;
        for(auto& x : Hmap) {
            s[i] = x.second;
            i++;
        }
        return s;
    }
};

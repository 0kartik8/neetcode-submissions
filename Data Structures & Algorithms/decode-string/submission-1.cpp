class Solution {
public:
    string decodeString(string s) {
        string s2;
        stack<int> st1;
        stack<char> st2;
        int b =0;
        for(int i =0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                if(b==1){
                    st1.top() = st1.top()*10 + (s[i]-'0');
                }
                else
                    st1.push(s[i]-'0');
                b=1;
                continue;
            }
            else{
                b=2;
                st2.push(s[i]);
                if(s[i]==']'){
                    st2.pop();
                    while(st2.size()!=0 && st2.top() != '['){
                        s2.push_back(st2.top());
                        st2.pop();
                    }
                    if(st2.size() != 0 && st2.top()=='['){
                        st2.pop();
                        if(st1.size()==0){
                            for(int j = s2.size() - 1; j >= 0; j--) {
                                st2.push(s2[j]);
                            }
                            s2.clear();
                        }
                        else{        
                            while(st1.size() != 0 && st1.top() > 0){
                                for(int j = s2.size() - 1; j >= 0; j--) {
                                    st2.push(s2[j]);
                                }
                                st1.top()--;
                                if(st1.top()<=0){
                                    st1.pop();
                                    break;
                                }
                            }
                            s2.clear();
                        }
                    }

                }
            }
        }
    int n = st2.size();
    string ans(n,'0');

    for(int i =n-1; i>=0;i--){
        ans[i] = st2.top();
        st2.pop();
    }   
    return ans;
    }
};
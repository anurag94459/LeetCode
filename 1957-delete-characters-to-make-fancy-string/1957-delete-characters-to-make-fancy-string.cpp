class Solution {
public:
    string makeFancyString(string s) {
        string res;
        int n=s.size();
        for(int i=0;i<n-2;i++){
            if(s[i]!=s[i+1] || s[i]!=s[i+2]){
                res+=s[i];
            }
        }
        res+=s[n-2];
        res+=s[n-1];
        return res;
    }
};
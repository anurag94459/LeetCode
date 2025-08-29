class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        
        if(s==" "){
            return 1;
        }
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> ch;
            int count=0;
            for(int j=i;j<s.size();j++){
                if(ch[s[j]]>0){
                    len=max(len,count);
                    break;
                }
                else{
                    ch[s[j]]++;
                    count++;
                }
            }
            len=max(len,count);
        }
        return len;
    }
};
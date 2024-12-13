class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long res=0;
        sort(gifts.begin(),gifts.end());
        int l=gifts.size()-1;
        while(k--){
            gifts[l]=sqrt(gifts[l]);
            sort(gifts.begin(),gifts.end());
            
        }
        for(int i=0;i<gifts.size();i++){
            res+=gifts[i];
        }
        return res;
    }
};
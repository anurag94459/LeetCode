class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=*max_element(candies.begin(),candies.end())){
                res.push_back(true);
            }
            else
                res.push_back(false);
        }
        return res;
    }
};
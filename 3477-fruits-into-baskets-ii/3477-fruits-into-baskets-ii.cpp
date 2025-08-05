class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        
        vector<int> r(n,0);
        int res=0;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=0;j<n;j++){
                if(fruits[i]<=baskets[j]){
                    count=0;
                    baskets[j]=0;
                    break;
                }
            }
            res+=count;
            
        }
        return res;
    }
};
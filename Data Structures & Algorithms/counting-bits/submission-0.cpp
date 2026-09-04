class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int cnt=0,j=i;
            while(j){
                cnt+=(j&1);
                j>>=1;
            }
            res.push_back(cnt);
        }
        return res;
    }
};

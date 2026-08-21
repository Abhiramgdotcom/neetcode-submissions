class Solution {
public:
    vector<int> countBits(int n) {
        int count=0;
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){
            int k=i;
            while(k!=0){
                if(k & 1)
                    count++;
                k>>=1;
            }
            ans[i]=count;
            count=0;
        }
        
        return ans;
    }
};

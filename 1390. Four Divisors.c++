class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for (int i=0;i<nums.size();i++){
            int n=nums[i];
            int s=0;
            int c=0;
            for (int j=1;j*j<=n;j++){
                if(c==5){
                    break;
                }
                if(n%j==0){
                    if(j!=n/j){
                        c+=2;
                        s+=(j+n/j);
                    }
                    else{
                        c+=1;
                        s+=j;
                    }
                }
            }
            if(c==4){
                ans+=s;
            }
        }
        return ans;
    }
};

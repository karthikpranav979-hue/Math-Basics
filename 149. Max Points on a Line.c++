class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        map <pair<int,int>,int> mp;
        int dy;
        int dx;
        int gc;
        int ans=0;
        int mq;
        for (int i=0;i<points.size();i++){
            auto arr=points[i];
            for (int j=0;j<points.size();j++){
                if(i==j){
                    continue;
                }
                dy=arr[1]-points[j][1];
                dx=arr[0]-points[j][0];
                gc=gcd(dy,dx);
                dy/=gc;
                dx/=gc;
                mp[{dx,dy}]++;
            }
            mq=0;
            for(auto it:mp){
                mq=max(mq,it.second);
            }
            ans=max(ans,mq);
            mp.clear();
        }
        return ans+1;
        
    }
};

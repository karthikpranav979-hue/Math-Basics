class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int n1=x;
        while(n1){
            rev=(rev*10)+(n1%10);
            n1/=10;
        }
        if(rev>2147483647 or rev<-2147483647){
            return 0;
        }
        return rev;
    }
};

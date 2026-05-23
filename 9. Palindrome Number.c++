class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long rev=0;
        int n1=x;
        while(n1){
            rev=(rev*10)+(n1%10);
            n1/=10;
        }
        return (rev==x);
    }
};

class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int n1=num;
        while(n1){
            if(num%(n1%10)==0){
                c+=1;
            }
            n1/=10;
        }
        return c;
    }
};

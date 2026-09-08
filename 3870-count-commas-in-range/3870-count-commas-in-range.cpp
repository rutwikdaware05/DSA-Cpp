class Solution {
public:
    int countCommas(int n) {
        int digits = 0;
        int temp = n;
        while(n != 0){
            n = n / 10;
            digits++;
        }
        if(digits < 4){
            return 0;
        }
        return temp - 1000 + 1;
        
    }
};
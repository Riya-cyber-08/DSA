class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, rev = 0;
        
        while(n > 0){
            long long remainder = n % 10;
            if(remainder != 0) {
               sum += remainder;
               rev = (rev* 10) + remainder;
            } n = n /10;




        }
        long long reverse = 0;
        while(rev > 0){
            reverse = (reverse *10)+(rev %10);
            rev = rev/10;
        }return reverse*sum;
    
        
        
        
    }
};



        
    


       
 



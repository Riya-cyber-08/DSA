class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int remainder ,rev = 0;
        while( x >0){
            remainder = x % 10;
            rev =(rev *10) + remainder;
            x = x / 10;
        }
        if(rev == original){
            return true;
        }else{
            return false;
        }
        
        
    }
};



        
    


       
 



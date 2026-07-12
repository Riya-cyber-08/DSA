class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == nums[i-1]){
                nums.erase(nums[i]);
            }
        }return nums.size() ;
        
    }
};



        
    


       
 



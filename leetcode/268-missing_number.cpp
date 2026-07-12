class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n = nums.size();
        int st = 0 , end = n-1;
        int first = -1,last = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == tar){
                first = mid ;
                end = mid- 1;

               
            }else if(nums[mid] < tar){
                st = mid + 1;

            }else{
                end = mid - 1;
            }
        }st = 0 ;
        end = n-1;
        while(st<= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == tar){
                last = mid;
                st = mid+ 1;
            }else if(nums[mid] < tar){
                st = mid+ 1;
            }else{
                end = mid-1;
            }
        }return {first , last};
        
    }   
};


        
    


       
 



class Solution {
public:
    
    void getall(vector<int>& nums ,int idx , vector<vector<int>> &ans,vector<int> &temp){
        
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }temp.push_back(nums[idx]);
        getall(nums, idx + 1,ans,temp);
        
        temp.pop_back();
        int next = idx + 1;
        while(next < nums.size() && nums[next] == nums[idx]){
            next ++;
        }
        getall(nums,next,ans,temp);
        return;

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getall(nums ,0 , ans,temp);
        return ans;
        
    }
};


        
    


       
 



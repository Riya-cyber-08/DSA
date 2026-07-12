class Solution {
public:
    
    void getall(vector<int> &candidates , int target , int idx , vector<vector<int>> &ans,vector<int> com){
        sort(candidates.begin() , candidates.end());
        
        
        if(target == 0){
            ans.push_back(com);
            return;
        }
        if(idx == candidates.size() || target<0){
            return;
        }
        
           
        com.push_back(candidates[idx]);
        getall(candidates,target-candidates[idx],idx+ 1,ans,com);
        com.pop_back();
        int next = idx + 1;
        while(next<candidates.size() && candidates[next] == candidates[idx]){
            next++;
        }
        getall(candidates , target ,next,ans, com);
        return;

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> com;
        getall(candidates,target , 0 ,ans, com);
        return ans;
        
    }
};


        
    


       
 



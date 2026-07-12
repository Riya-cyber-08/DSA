class Solution {
public:
    set<vector<int>> s;
    void getallcombinations(vector<int>& candidates,int idx,int target ,vector<vector<int>> &ans,vector<int> &com){
        
        if(idx == candidates.size() || target < 0){
            return;
        }if(target == 0){
            if(s.find(com) == s.end()){
                ans.push_back(com);
                s.insert(com);
            }
            return ;
        }com.push_back(candidates[idx]);
        getallcombinations(candidates,idx + 1,target - candidates[idx] , ans,com);
        getallcombinations(candidates , idx,target-candidates[idx] , ans ,com);
        com.pop_back();
        getallcombinations(candidates,idx + 1,target,ans,com);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> com;
        getallcombinations(candidates,0 ,target,ans,com);
        return ans;

        
    }
};


        
    


       
 



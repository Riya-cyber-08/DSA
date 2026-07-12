class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        set<int> s;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(nums1[i] == nums2[j]){
                    if(s.find(nums1[i]) == s.end()){
                        s.insert(nums1[i]);
                        ans.push_back(nums1[i]);
                    }
                    
                }
            }
        }return ans;
        
    }
};



        
    


       
 



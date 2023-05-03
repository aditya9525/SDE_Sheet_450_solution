class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<vector<int>> ans;
        
        for(int i=0; i<nums1.size(); i++){
            set1.insert(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){
            set1.erase(nums2[i]);
            set2.insert(nums2[i]);
        }
        vector<int>tempArray;
        for(auto it:set1){
            tempArray.push_back(it);
        }
        ans.push_back(tempArray);
        tempArray.clear();

        for(int i=0; i<nums1.size(); i++){
            set2.erase(nums1[i]);
        }
        for(auto it:set2){
            tempArray.push_back(it);
        }
        ans.push_back(tempArray);

        return ans;
    }
};

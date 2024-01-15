class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int> ans;
        int k=0;
        for(auto item: nums){
            if(item==val)
                continue;
            else
            {
                k++;
                ans.push_back(item);
            }
        }
        nums= ans;
        return k;
    }
};
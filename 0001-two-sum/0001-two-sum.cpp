class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        for (int j = 0; j < nums.size(); j++) {
            for (int i = j + 1; i < nums.size(); i++) {
                int sum = nums[j] + nums[i];
                if (sum == target) {

                        ans.push_back(j);
                        ans.push_back(i);
                        return ans;
                    }
            }
        }
        return ans;
    }
};
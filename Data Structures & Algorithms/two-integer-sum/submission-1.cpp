class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int st = -1, end = -1;
        int n = nums.size();

        // bruteforce TC --> O(N^2), TC --> O(1)

        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    st = i;
                    end = j;
                }
            }
        }


        return {st, end};
    }
};

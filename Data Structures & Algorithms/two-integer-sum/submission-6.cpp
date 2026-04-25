class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int st = -1, end = -1;
        int n = nums.size();

        // Hashing TC --> O(NlogN), TC --> O(N)

        map<int, int> mp;

        for(int i = 0;  i<n; i++){
            mp[nums[i]] = i;
        }

         for(int i = 0; i<n; i++){
            int x = nums[i];
            int y = target - nums[i];

            if(mp.find(y) != mp.end()){
                if(i == mp[y]) continue;
                st = i;
                end = mp[y];
                break;
            }

         } 


        return {st, end};
    }
};

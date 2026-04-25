class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int st = -1, end = -1;
        int n = nums.size();

        // bruteforce TC --> O(N^2), TC --> O(1)

        // for(int i = 0; i<n; i++){
        //     for(int j = i + 1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             st = i;
        //             end = j;
        //         }
        //     }
        // }

        // Hashing TC --> O(N), TC --> O(N)

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

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;

        for(int x : nums) freq[x]++;

        for(auto x : freq){
            if(x.second > (n/2)) return x.first;
        }

        return -1;
    }
};
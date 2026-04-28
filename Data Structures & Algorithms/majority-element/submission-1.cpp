class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Time and space is O(N)
        // int n = nums.size();

        // unordered_map<int, int> freq;

        // for(int x : nums) freq[x]++;

        // for(auto x : freq){
        //     if(x.second > (n/2)) return x.first;
        // }

        // return -1;

        // TC -- O(N), SC -- O(1)
        int count = 0, key  = -1;

        for(int x : nums){
            if(count == 0){
                count += 1;
                key = x;
            }else if(key == x){
                count++;
            }else if(key != x){
                count--;
                
            }
        }
        return key;
    }
};
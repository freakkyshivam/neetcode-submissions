class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();

        // sort(nums.begin(), nums.end());
        // int count = 0;

        // int i = 0;
        // while( i<n){

        //     if(nums[i] == val){  
        //            count++;  
        //     }  
        //     i++;
        // }

        // int st = -1;

        // for(int i = 0; i<n; i++){
        //     if(nums[i] == val){
        //     st = i;
        //     break;
        //     }
        // }

        // nums.erase(nums.begin() + st, nums.begin() + st + count );

        // return nums.size();

        // optimal

        int k = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] != val){
                nums[k++] = nums[i];
            }
        }

        return k;

    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> fq;
        vector<int> ans;

        for(int x : nums){
            fq[x]++;
        }
        
        vector<pair<int, int>> v;

        for(auto x : fq){
            v.push_back(x); 
        }

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        });

        for(int i = 0; i<k; i++){
            ans.push_back(v[i].first);
        }

        return   ans;
    }
};

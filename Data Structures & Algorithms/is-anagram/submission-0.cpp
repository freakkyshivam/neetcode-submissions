class Solution {
public:
    bool isAnagram(string s, string t) {
        // bruteforce TC --> O(N), SC --> O(N)

        unordered_map<char,int> fq;

        for(int c : s){
            fq[c]++;
        }

        for(int c : t){
            fq[c]--;
        }

        for(auto x : fq){
            if(x.second != 0) return false;
        }

        return true;
    }
};

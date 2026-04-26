class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        int n = strs.size();
        vector<bool> visited(n, false);

        for(int i = 0; i<n; i++){

            if(visited[i]) continue;

            vector<string>temp;
            string s1 = strs[i];
            temp.push_back(s1);
            

             visited[i] = true;

            for(int j = i + 1; j<n;  j++){
                if(visited[j]) continue;
                string s2 = strs[j];
                 
                unordered_map<char, int> fq;    
                
                  for(char c : s1) fq[c]++;
                  for(char c : s2) fq[c]--;
                 
                 bool is = true;

                 for(auto x : fq){
                    if(x.second != 0) {
                        is = false;
                        break;
                    }
                 }
                if(is){
                     temp.push_back(s2);
                     visited[j] = true;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};

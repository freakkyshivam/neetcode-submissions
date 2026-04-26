class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = strs[0];
        string temp = "";

        for(int i = 1; i<strs.size(); i++){

                for(int j = 0 ; j < strs[i].size(); j++){
                    if(res[j] == strs[i][j]){
                        temp += strs[i][j];
                    }
                    else{
                        break;
                    }
                    
                }
              res = temp;
              temp.clear();
        }
        return res;
    }
};
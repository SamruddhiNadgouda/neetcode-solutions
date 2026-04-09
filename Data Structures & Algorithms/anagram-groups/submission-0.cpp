class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>res;
        for(string s : strs){
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            res[sortedStr].push_back(s);
        }
        vector<vector<string>> op;
        for(auto p : res){
            op.push_back(p.second);
        }
        return op;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
        for(const string& c:strs){
            string sorted_s=c;
            sort(sorted_s.begin(),sorted_s.end());
    mp[sorted_s].push_back(c);
        }
        vector<vector<string>> result;
        for(const auto& pair: mp){
            result.push_back(pair.second);
        }
        return result;
    }
};

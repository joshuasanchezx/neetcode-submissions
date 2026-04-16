class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>>map;

        for (int i = 0; i < strs.size(); i++){
            string key = strs[i];

            std::sort(key.begin(), key.end());
            map[key].push_back(strs[i]);

            
        }
        std::vector<vector<string>> result;
        for (auto& pair : map){ result.push_back(pair.second); }
        return result;
    }
};
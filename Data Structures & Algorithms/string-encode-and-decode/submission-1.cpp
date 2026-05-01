class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";
        for (int i = 0; i < strs.size(); i++){
            output += to_string(strs[i].size()) + "#" + strs[i];
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i < s.size()){
            int j = i;
            while(s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            result.push_back(s.substr(i, length));
            i += length;
        }
        return result;
    }
};

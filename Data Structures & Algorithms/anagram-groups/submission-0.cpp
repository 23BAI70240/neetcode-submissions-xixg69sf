class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,unordered_map<char,int>> freq;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];
            unordered_map<char,int> freq1;
            for (int j=0;j<s.size();j++){
                freq1[s[j]]++;
            }
            freq[strs[i]]=freq1;
        }
        vector<bool> check(strs.size(),false);
        for (int i=0;i<strs.size();i++){
            if (!check[i]){
                vector<string> temp;
            for (int j=i;j<strs.size();j++){
                if (!check[j] && freq[strs[i]]==freq[strs[j]]){
                    temp.push_back(strs[j]);
                    check[j]=true;
                }
            }
            ans.push_back(temp);
            }
            if (!check[i]) {
                vector<string> temp;
                temp.push_back(strs[i]);
                ans.push_back(temp);
                check[i]=true;
            }
        }
        return ans;
    }
};

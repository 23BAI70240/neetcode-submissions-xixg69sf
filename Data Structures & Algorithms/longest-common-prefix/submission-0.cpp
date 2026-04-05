class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        string check="";
        int k=0;
        string ans="";
        check+=s[k];
        while(k<s.size()){
            for (int i=0;i<strs.size();i++){
                string h=strs[i];
                string temp="";
                for (int j=0;j<h.size() && j<check.size();j++){
                    temp+=h[j];
                }
                if (check!=temp){
                    return ans;
                }
            }
            ans=check;
            k++;
            check+=s[k];
        }
        return ans;
    }
};
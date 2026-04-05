class Solution {
public:
    vector<int> getConcatenation(vector<int>& num) {
        int n=num.size();
        vector<int> temp(2*n);
        for (int i=0;i<n;i++){
            temp[i]=num[i];
            temp[n+i]=num[i];
        }
        return temp;
    }
};
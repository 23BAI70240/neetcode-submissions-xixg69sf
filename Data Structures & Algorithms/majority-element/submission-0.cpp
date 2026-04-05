class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> freq;
        for (auto i :  nums ){
            freq[i]++;
            if (freq[i]>n) return i;
        }
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for (auto i : nums ){
            freq[i]++;
        }
        vector<int> ans;
        bool found=false;
        int temp;
        for (int i=0;i<nums.size();i++){
            if (!found){
            temp=target-nums[i];
            freq[nums[i]]--;
            if (freq[temp]>=1){
                found=true;
                ans.push_back(i);
            }
            freq[nums[i]]++;
            }
            else{
                if (temp==nums[i]) ans.push_back(i);
            }
        }
        return ans;
    }
};

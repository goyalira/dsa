class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int counter=0;
        int prefixsum=0;
        for(int i=0;i<nums.size();i++){
            prefixsum=prefixsum+nums[i];
            if(mp.find(prefixsum-k)!=mp.end())
            counter=counter+mp[prefixsum-k];
            mp[prefixsum]++;

        }
        return counter;
        
    }
};
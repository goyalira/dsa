class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(counter==0)
            candidate=nums[i];
            if(nums[i]==candidate)
            counter++;
            else
            counter--;
        }
        return candidate;
        
    }
};
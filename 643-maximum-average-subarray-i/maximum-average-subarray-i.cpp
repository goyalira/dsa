class Solution {
public:
double slidingWindow(vector<int>&nums,int k){
    int i=0;
    int j=k-1;
    int maxsum=INT_MIN;
    int sum=0;
    for(int y=i;y<=j;y++)
        sum+=nums[y];
        maxsum=sum;
    j++;
    while(j<nums.size()){
        sum-=nums[i++];
        sum+=nums[j++];
        maxsum=max(sum,maxsum);
    }
    

    double avg=maxsum/(double)k;
    return avg;

}
// double maxavgSub(vector<int>&nums, int k){
//     int maxsum=INT_MIN;
//     int i=0;
//     int j=k-1;
//     while(j<nums.size()){
//         int sum=0;
//         for(int y=i;y<=j;y++){
//             sum=sum+nums[y];
//         }
//         maxsum=max(maxsum,sum);
//         i++,j++;
//     }

//     double avg=maxsum/(double)k;
//     return avg;

// }
    double findMaxAverage(vector<int>& nums, int k) { 
    return slidingWindow(nums,k);
       
        
    }
};
class Solution {
public:
    int countPrimes(int n) {
        vector<bool>arr(n,true);
        if(n==0)
        return 0;
        arr[0]=arr[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            if(arr[i]){
            ans++;
            int j=2*i;
             while(j<n){
             arr[j]=false;
             j=j+i;
             }
            }
            }
            return ans;
        }
    };

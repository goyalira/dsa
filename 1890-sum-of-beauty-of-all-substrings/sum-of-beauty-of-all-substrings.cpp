class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        unordered_map<char,int>mp;
        //creating substrings
        for(int i=0;i<s.size();i++){
            mp.clear();
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;

                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto each:mp){
                    mini=min(mini,each.second);
                    maxi=max(maxi,each.second);
                }
                int beauty=maxi-mini;
                sum=sum+beauty;
            }
        }
        return sum;
    }
};
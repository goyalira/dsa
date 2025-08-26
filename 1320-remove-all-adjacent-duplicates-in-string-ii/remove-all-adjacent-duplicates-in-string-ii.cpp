class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        string res(n,' ');
        vector<int>count(n);
        int j=0;
        for(int i=0;i<n;i++){
            res[j]=s[i];
            if(j>0 && res[j]==res[j-1])
            count[j]=count[j-1]+1;
            else
            count[j]=1;
            if(count[j]==k)
            j=j-k;
            j++;
        }
         return res.substr(0,j);
    }
};
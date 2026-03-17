class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hashval[256]={0};
        bool ischarmapped[256]={0};
        for(int i=0;i<s.length();i++){
            if(hashval[s[i]]==0 && ischarmapped[t[i]]==0)
            hashval[s[i]]=t[i];
            ischarmapped[t[i]]=true;
        }
        for(int i=0;i<s.size();i++){
        if(hashval[s[i]]!=t[i])
        return false;
    }
    return true;


        
    }
};
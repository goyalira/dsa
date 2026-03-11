class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqTable[256]={0};
        for(int i=0;i<s.size();i++)
        freqTable[s[i]]++;
        for(int j=0;j<t.size();j++)
        freqTable[t[j]]--;
        for(int k=0;k<256;k++){
            if(freqTable[k]!=0)
            return false;
        }
        return true;
        
    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;
        while(i<s.length()){
            if(ans.empty() || ans.back()!=s[i]){
            ans.push_back(s[i]);
            i++;
            
        }
        if(ans.back()==s[i]){
        ans.pop_back();
        i++;
        }

        }
        return ans;
        
    }
};
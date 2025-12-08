class Solution {
public:
void solve(string output,vector<string>&ans,string digits,unordered_map<char,string>&mapping,int i){
    if(i>=digits.length()){
        ans.push_back(output);
        return;
    }
    char digit=digits[i];
    string mappedstring=mapping[digit];
    for(int ch=0;ch<mappedstring.length();ch++){
        output.push_back(mappedstring[ch]);
        solve(output,ans,digits,mapping,i+1);
        output.pop_back();
    }
    
    

    
}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        unordered_map<char,string>mapping;
        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";
        int i=0;
        solve(output,ans,digits,mapping,i);
        return ans;
        
    }
};
class Solution {
public:

bool checkPalindrome(string ans,int start,int end){
    while(start<=end){
        if(ans[start]==ans[end])
        start++,end--;
        else 
        return false;
    }
    return true;
    
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j])
            i++,j--;
            else
            {
                bool firstans=checkPalindrome(s,i+1,j);
                bool secondans=checkPalindrome(s,i,j-1);
                bool finalans=firstans||secondans;
                return finalans;
            }
        }
        return true;
    }
};
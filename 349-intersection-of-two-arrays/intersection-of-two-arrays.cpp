class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    if(st.find(nums2[j]) == st.end()){
                        st.insert(nums2[j]);
                    }
                }
            }
        }

        // copy elements from set to vector
        for(auto it : st){
            ans.push_back(it);
        }

        return ans;
    }
};
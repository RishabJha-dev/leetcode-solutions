class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        bool present1[101] = {false};
        bool present2[101] = {false};
        
        for (int i = 0; i < nums1.size(); i++) {
            present1[nums1[i]] = true;
        }
        for (int i = 0; i < nums2.size(); i++) {
            present2[nums2[i]] = true;
        }  
        int ans1 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            if (present2[nums1[i]]) {
                ans1++;
            }
        }
        int ans2 = 0;
        for (int i = 0; i < nums2.size(); i++) {
            if (present1[nums2[i]]) {
                ans2++;
            }
        }
        return {ans1, ans2};
    }
};

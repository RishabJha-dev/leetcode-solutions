class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        for (int i = digits.size()-1 ; i>=0 ; i--){
            int sum = digits[i] + carry;
            if (sum != 10){
                ans.push_back(sum);
                carry = 0;
            }
            else {
                ans.push_back(0);
                carry = 1;
            }

        }
        if (carry == 1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

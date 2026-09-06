class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int nsum = n*(n+1) / 2;
        int arrsum = 0 ;
        for (int ele : arr){
            arrsum += ele;
        }
        return(nsum - arrsum);
    }
};

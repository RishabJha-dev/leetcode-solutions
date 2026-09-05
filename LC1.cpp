class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        for (int i =0 ; i < n ; i++){
            for (int j = n-1 ; j > 0 ; j--){
                if (i != j && arr[i] + arr[j] == target){
                    return {i, j};
                }
            }
        }
        return{};
    }
};

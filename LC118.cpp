class Solution {
public:
    vector<vector<int>> generate(int nr) {
        vector<vector<int>> arr(nr);
        for(int i=0 ; i<nr ;i++){
            for(int j=0 ; j<=i ; j++){
                arr[i].push_back(1);
            }
        }
        for(int i=2 ; i<nr ; i++){
            for(int j=1 ; j<i ; j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
        return arr;
    }
};

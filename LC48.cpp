class Solution {
public:   
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        for (int i = 0 ; i<n ; i++){
            for (int j = 0 ; j<i ; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for (int i = 0 ; i<n ; i++){
            int s=0,e=n-1;
            while(s<e){
                int temp = arr[i][s];
                arr[i][s] = arr[i][e];
                arr[i][e] = temp;
                s++;
                e--;
            }
        }
    }
};

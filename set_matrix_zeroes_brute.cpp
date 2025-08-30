#include<iostream>
#include<vector>
using namespace std;
void setZeroes(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(matrix[i][j] == 0){
                for(int col = 0;col<cols;col++){
                    if(matrix[i][col]!=0) matrix[i][col] = -1;
                }
                for(int row = 0;row<rows;row++){
                    if(matrix[row][j] != 0) matrix[row][j] = -1;
                }
            }
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(matrix[i][j] == -1)matrix[i][j] = 0;
        }
    }
}
int main(){
    vector<vector<int>>mat = {
        {1,2,3},
        {4,0,6},
        {7,8,9}
    };
    setZeroes(mat);
    for(auto row:mat){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
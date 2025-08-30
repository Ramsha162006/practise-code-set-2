#include<iostream>
#include<vector>
using namespace std;
void LeadersinArr(int arr[],int n){
    vector<int>leaders;
    int maxFromRight = arr[n-1];
    leaders.push_back(maxFromRight);
    for(int i = n-2;i>=0;i--){
        if(arr[i]>=maxFromRight){
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }
    for(int i = leaders.size()-1;i>=0;i--){
        cout<<leaders[i]<<" ";
    }
}
int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    LeadersinArr(arr,n);
    
}
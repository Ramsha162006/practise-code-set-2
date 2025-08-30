#include<iostream>
using namespace std;
void LeadersinArr(int arr[],int n){
    for(int i = 0;i<n;i++){
        bool isLeader = true;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader)
            cout<<arr[i]<<" ";
        
    }
}
int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    LeadersinArr(arr,n);
    
}
#include<iostream>
using namespace std;
bool exists(int arr[],int n,int num){
    for(int i = 0;i<n;i++){
        if(arr[i]==num)return true;
    }
    return false;
}
int longestConsecutivesequence(int arr[],int n){
    int longest= 0;
    for(int i = 0;i<n;i++){
        int currentNum = arr[i];
        int count = 1;
    
    while(exists(arr,n,currentNum+1)){
        currentNum ++;
        count ++;
    }
    longest = max(longest,count);
}
    return longest;
}
int main(){
    int arr[] = {100,4,200,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = longestConsecutivesequence(arr,n);
    cout<<"Longest consecutive sequence length: "<<result;
    cout<<endl;

}

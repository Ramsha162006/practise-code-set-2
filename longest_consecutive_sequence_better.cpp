#include<iostream>
#include<algorithm>
using namespace std;
int longestConsecutivesequence(int arr[],int n){
    if(n == 0)return 0;
    sort(arr,arr+n);
    int longest = 1;
    int count = 1;
    for(int i = 1 ;i<n;i++){
        if(arr[i] == arr[i-1]){
            continue;
        }
        if(arr[i] == arr[i-1]+1){
            count++;
        }
        else{
            count = 1;
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

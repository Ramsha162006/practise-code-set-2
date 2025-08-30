#include<iostream>
#include<unordered_set>
using namespace std;

int longestConsecutivesequence(int arr[],int n){
    unordered_set<int> s;
    for(int i = 0;i<n;i++){

        s.insert(arr[i]);
    }
    int longest = 0;
    for(int num : s){
        if(s.find(num-1)==s.end()){
            int currentNum=num;
            int count = 1;
        
        while(s.find(currentNum+1)!=s.end()){
            currentNum++;
            count++;
        }
        longest = max(longest,count);
    }
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

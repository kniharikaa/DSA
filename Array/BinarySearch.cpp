#include <iostream>
#include <vector>
using namespace std;
//using iterative
int binarySearch(vector<int> arr,int tar){
    int st=0; int end=arr.size()-1;
    
    while(st<=end){
        int mid= st + (end-st)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            st=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
//using recursion
int recBS(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            return recBS(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return recBS(arr,tar,mid-1,end);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,20};
    int tar=9;
    int st;
    cout<<"enter start";
    cin>>st;
    int end;
    cout<<"enter end";
    cin>>end;
    cout<<binarySearch(arr,tar)<<endl;
    cout<<recBS(arr,tar,st,end)<<endl;
}
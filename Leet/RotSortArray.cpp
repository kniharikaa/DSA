#include <iostream>
#include <vector>
using namespace std;
int rotatedSortedArray(vector<int> &arr, int target){
    int st=0; int end=arr.size()-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st] <= target && target <= arr[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(arr[mid] <= target && target << arr[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array elements of rotated sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int tar;
    cout<<"Enter the target element: "<<endl;
    cin>>tar;
    //for output 
    cout<<"Target element index: "<<rotatedSortedArray(a, tar)<<endl;
}
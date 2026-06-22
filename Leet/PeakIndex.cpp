#include <iostream>
#include <vector>
using namespace std;
int peakIndexMountainArray(vector<int> &nums){
    int st=0; int end = nums.size()-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid-1]< nums[mid] && nums[mid] > nums[mid+1]){
            return mid;
        }else if(nums[mid-1]< nums[mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //for output
    cout<<"Peak Element Index: "<<peakIndexMountainArray(arr)<<endl;
}
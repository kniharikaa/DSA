#include <iostream>
#include <vector>
using namespace std;
int nonDuplicate(vector<int> &nums){
    int n=nums.size();
    int st=0; int end=n-1;
    if(n==1) return nums[0];
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && nums[0] != nums[1]) return nums[mid];
        if(mid==n-1 && nums[n-1] != nums[n-2]) return nums[mid];
        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return mid;
        if(mid%2 == 0){
            if(nums[mid-1]==nums[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(nums[mid-1]==nums[mid]){
                st = mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Single Element: ";
    cout<<nonDuplicate(nums)<<endl;

}
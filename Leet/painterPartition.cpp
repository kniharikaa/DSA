#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int minallowedtime){
    int time=0; int painter=1;
    for(int i=0; i<n; i++){
        if(time + arr[i] <= minallowedtime){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }
    return painter <=m;
}
int minTimetoPaint(vector<int> &arr, int n, int m){
    int sum=0; int maxVal=INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st=maxVal, end=sum, ans=-1;
    while(st <= end){
        int mid = st +(end-st)/2;
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements for painters time: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter number of painters: ";
    cin>>m;
    cout<<"Min Time for Painters: "<<minTimetoPaint(arr, n, m)<<endl;
}
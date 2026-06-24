#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mindist){
    int cows=1; int lastStallPos = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-lastStallPos >= mindist){
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == m){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int n, int m){
    sort(arr.begin(), arr.end());
    int st=1, end=arr[n-1]-arr[0], ans=-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter position of cows: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter number of cows: ";
    cin>>m;
    cout<<"Max-min distance: "<<getDistance(arr, n, m)<<endl;
}
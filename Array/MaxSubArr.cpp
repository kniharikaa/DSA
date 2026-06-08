#include <iostream>
using namespace std;
int main(){
    int maxSum=INT_MIN;
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){ //i=starting point
        int Currsum=0;
        for(int j=i;j<size;j++){ //j=ending point
            Currsum+=arr[j];
            maxSum = max(maxSum, Currsum);
        }
    }
    cout<<maxSum<<endl;
}


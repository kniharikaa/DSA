#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxallowedpages){
    int student=1; int pages=0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxallowedpages){
            return false;
        }
        if(pages+arr[i] <= maxallowedpages){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}
int allocateBooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans=-1;
    int st=0; int end=sum;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
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
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cout << "Enter number of students: ";
    cin >> m;

    cout << "Max pages: " << allocateBooks(arr, n, m) << endl;
}
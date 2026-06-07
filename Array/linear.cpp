#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    int result = LinearSearch(arr, size, target);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<result<<endl;
    }
}
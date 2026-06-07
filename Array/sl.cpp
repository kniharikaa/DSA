#include <iostream>
using namespace std;
int main(){
    int nums[5]= {90, 80, 70, 60, 50};
    int size = sizeof(nums)/sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        // if(nums[i]<smallest){
        //     smallest=nums[i];     
        // }
        //short method
        smallest = min(smallest, nums[i]); 
        largest = max(largest, nums[i]);
    }
    cout<<"smallest element is: "<<smallest<<endl;
    cout<<"largest element is: "<<largest<<endl;
    return 0;
}
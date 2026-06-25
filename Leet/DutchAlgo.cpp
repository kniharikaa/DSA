#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums){
    int n=nums.size();
    int mid=0, low=0, high=n-1;
    while( mid <= high){
        if(nums[mid]== 0){
            swap(nums[mid], nums[low]);
            mid++; low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}
void printArray(vector<int> &nums){
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0, 1, 2): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";
    printArray(nums);

    return 0;
}

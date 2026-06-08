#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int>& nums){
        int currSum=0; int maxSum=INT_MIN;
        for(int val: nums){
            currSum+=val;
            maxSum = max(maxSum, currSum);
            if(currSum<0){
                currSum=0;
           }
       }
        cout<<maxSum<<endl;
}
int main(){
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    maxSubArray(nums);
    
}
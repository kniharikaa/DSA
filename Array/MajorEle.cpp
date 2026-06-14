//major element is the element which appears more than n/2 times in the array
#include<iostream>
#include<vector>
using namespace std;
int majorElement(vector<int>& nums) {
        int count=0; int candidate;
        for(int num: nums){
            if(count==0){
                candidate=num;
            }
            if(num==candidate){ 
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
}
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorElement(nums)<<endl;
}
#include <iostream>
using namespace std;
//sum of all number from 1 to n divisible by 3
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }
// for factorial of a numnber n
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<fac<<endl;
    return 0;   
}
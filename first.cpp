#include <iostream>
using namespace std;
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
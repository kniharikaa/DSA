#include <iostream>
using namespace std;
int main(){
//    // basic pattern
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     //if starting from 0
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     //for character pattern 
//     for(int i=0;i<n;i++){
//         char ch = 'A';
//         for(int j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     //for 123456789
//     int n=3;
//     int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     //for character 
//     char ch='A';
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     //star pattern 
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     //for number pattern
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<i+1;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     //for repeadted number pattern
//     int n=4;
//     for(int i=0; i<n; i++){
//         for( int j=0; j<i+1; j++){
//             cout<<(i+1)<<" ";
//         }
//         cout<<endl;
//     }
//     //for 1,12,123,1234...
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=1; j<=i+1;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     //reverse pattern of above pattern
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     //inverted triangle pattern
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<(i+1);
//         }
//         cout<<endl;
//     } 
//     //pyramid pattern
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     //Hollow pattern
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0){
//             for(int j=0;j<2*i-1;j++){
//                 cout<< " ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=n-2){
//             for(int j=0;j<2*(n-i)-5;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    //Butterfly pattern
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     //for space
    //     for(int j=0;j<2*(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int n = 4;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}

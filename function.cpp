#include <iostream>
using namespace std;
// for sum of digits of a number
int sumofDigits(int num){
    int digsum=0;
    while(num>0){
        int last_dig= num%10;
        num/=10;
        digsum+=last_dig;
    }
    return digsum;
}
//binomial coefficient
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    return fact_n/(fact_r*fact_n_r);
}
// funtion to check if a number is prime or not
 bool isPrime(int s){
    bool isPrime = true;
    for(int i=2; i*i<=s;i++){
        if(s%i==0){
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
 }
 //funtion to print all prime numbers in a range
void printPrimes(int start, int end){
    for(int i=start; i<=end; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
//fibonacci series
void fibonacci(int n){
    int a=0, b=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int next = a+b;
        a=b;
        b=next;
    }
 }
 //decimal to binary
 int dectoBinary(int decnum){
    int ans=0,pow=1;
    while(decnum>0){
        int rem = decnum%2;
        decnum /=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
 }
 //find if a number is power of 2
    bool isPowerOfTwo(int num){
        if(num<=0){
            return false;
        }
        return (num & (num-1))==0;
    } 
//to reverse an integer
int reverseInteger(int p){
    int rev=0;
    while(p>0){
        int last_dig = p%10;
        rev = rev*10 + last_dig;
        p/=10;
    }
    return rev;
}
   
int main(){
    int s=17;
    int n=8, r=3;
    int num=32;
    cout<<"nCr = "<<nCr(n,r)<<endl;
    cout<<"Sum = "<<sumofDigits(2356)<<endl;
    cout<<"Is Prime = "<<isPrime(s)<<endl;
    cout<<"Prime numbers in range: "<<endl;
    printPrimes(10,50);
    cout<<"Decimal to Binary = "<<dectoBinary(42)<<endl;
    fibonacci(10);
    cout<<"Is Power of Two = "<<isPowerOfTwo(16)<<endl;
    cout<<"Reverse Integer = "<<reverseInteger(12345)<<endl;
    return 0;
}
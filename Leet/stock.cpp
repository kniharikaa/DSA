#include <iostream>
#include <vector>
using namespace std;
int maxProfit(int prices[], int n){
    int maxProfit=0; int bestBuy=prices[0];
    for (int i=1; i<n; i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy=min(prices[i], bestBuy);
    }
    return maxProfit;
}
int main(){
    int prices[]={7,1,5,3,6,4};
    int n= sizeof(prices)/ sizeof(prices[0]);
    cout<< maxProfit(prices, n)<<endl;
    return 0;
}

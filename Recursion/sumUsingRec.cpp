#include<iostream>
using namespace std;
 
int NorSum(int n){
    if(n==0)              
        return 0;
    else
        return NorSum(n-1)+n;
}

int ForSum(int n){
    return n*(n+1)/2;  //formulae
}

int ISum(int n){  //iterative sum
     int sum=0;
     for(int i=0;i<=n;i++){
        sum=sum+i;
     }
     return sum;
}


int main(){
 
 cout<<NorSum(3)<<endl;
 cout<<ForSum(3)<<endl;
 cout<<ISum(3);
    return 0;
}
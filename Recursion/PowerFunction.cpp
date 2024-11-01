#include<iostream>
using namespace std;
 
int Pow(int m,int n){
    if(n==0)
        return 1;
    else
        return Pow(m,n-1)*m;
}

int PPow(int m,int n){  // more faster and efficient
    if(n==0)
        return 1;
    if(n%2==0)
        return PPow(m*m,n/2);
    else 
        return m*PPow(m*m,(n-1)/2);


}  


int main(){
 
  cout<<Pow(2,2)<<endl;  
  cout<<PPow(2,4);  
    return 0;
}
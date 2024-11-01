#include<iostream>
using namespace std;
 
int fun(int n){
    {
        static int x=0;  // static variable
        if(n>0){
            x++;
            return fun(n-1)+x;
        }
    }
}



int main(){
 int r;
 r=fun(5);
 cout<<r;
    
    return 0;
}
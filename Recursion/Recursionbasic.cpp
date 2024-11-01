#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<" "; // calling time
        fun(n-1);
    }
} 
void fun1(int n){
    if(n>0){
        
        fun1(n-1);
        cout<<n<<" "; // returning time;
        
    }
} 



int main(){
 
 //fun(3);
 fun1(3);
    
    return 0;
}
#include<iostream>
using namespace std;
 
void fun(int n){
    if(n>0){
        // code here will run while calling
        
        cout<<n<<" ";
        fun(n-1);

        // code here will run while returning
    }
}

int main(){
int x=3;
fun(x);
    
    
    return 0;
}


////////////////////


#include<iostream>
using namespace std;
 
void fun(int n){
    if(n>0){
        
        fun(n-1);
        cout<<n<<" ";
        }
}

int main(){
int x=3;
fun(x);
    
    
    return 0;
}
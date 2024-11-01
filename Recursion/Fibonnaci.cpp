#include<iostream>
using namespace std;
 
int Ifib(int n){   //iterative version
   int t0=0,t1=1,s=0;

   if(n<=1) 
        return n;

    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int Rfib(int n){ //recursive function
    if(n<=1)
        return n;
    else
        return Rfib(n-2)+Rfib(n-1);
}

int F[10]; // global array


int Mfib(int n){ //memoisation better code and faster
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=Mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=Mfib(n-1);

        return F[n-2]+F[n-1];
    }
}

int main(){

 for(int i=0;i<10;i++)
    F[i]-1;  //array initialiastion


 cout<<Mfib(5);
    
    return 0;
}
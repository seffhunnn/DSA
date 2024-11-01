#include<iostream>
using namespace std;
 
struct Array{
  int A[10];
  int size;
  int length;

};

int Maxtilli(struct Array arr){
    int mx=-1999999;
    for(int i=0;i<arr.length;i++){
        mx=max(mx,arr.A[i]);
        cout<<mx<<endl;
    }
}

int main(){
 struct Array arr={{12,43,11,45,25,62,63},10,7};
  Maxtilli(arr);
    return 0;
}
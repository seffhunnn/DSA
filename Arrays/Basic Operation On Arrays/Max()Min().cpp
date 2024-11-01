#include<iostream>
using namespace std;
 
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int Max(struct Array arr){
int max = arr.A[0];
 
for(int i=0;i<arr.length;i++){
    if(arr.A[i]>max){
        max=arr.A[i];
    }
}
 return max;
}

int Min(struct Array arr){
int min = arr.A[0];
 
for(int i=0;i<arr.length;i++){
    if(arr.A[i]<min){
        min=arr.A[i];
    }
}
 return min;
}
   



int main(){
 
    struct Array arr = {{0,99,4,17,6},10,5};
    cout<<Min(arr)<<endl;
    cout<<Max(arr);
    //Display(arr);
    return 0;
}
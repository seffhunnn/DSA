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

void Swap(int *x,int *y){   //function to swap
    int temp = *x;
    *x=*y;
    *y=temp;
}

void Reverse(struct Array *arr){      // method 1 by making a new array
    int *B;
    int i,j;
    B=new int(arr->length);
    for(i =arr->length-1,j =0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }

    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}

void Reverse2(struct Array *arr){    // method 2 by swapping 
    int i,j;
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        Swap(&arr->A[i],&arr->A[j]);
    }
    
}

int main(){
 
    struct Array arr = {{2,3,4,5,6},10,5};
    Reverse2(&arr);
    Display(arr);
    return 0;
}
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

void Swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void InsertSort(struct Array *arr,int x){ //insert
    
    int i = arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

void REarrange(struct Array *arr){  // Rearrange
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j) Swap(&arr->A[i],&arr->A[j]);
    }
}


int main(){
 
    struct Array arr = {{2,-3,25,10,-15,-7},10,6};
    REarrange(&arr);
    Display(arr);
    return 0;
}
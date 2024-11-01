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

void InsertSort(struct Array *arr,int x){
    
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


int IsSorted(struct Array arr){
        for(int i =0;i<arr.length-1;i++){
            if(arr.A[i]>arr.A[i+1])
            return 0;
        }
        return 1;
}

int main(){
 
    struct Array arr = {{2,3,25,10,15},10,5};
    //InsertSort(&arr,4);
    cout<<IsSorted(arr);
    //Display(arr);
    return 0;
}
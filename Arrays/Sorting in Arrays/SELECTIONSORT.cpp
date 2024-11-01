#include<iostream>
using namespace std;
 
struct Array{
  int A[10];
  int size;
  int length;

};


int Min(struct Array arr){

    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
    if(arr.A[i]<min){
        min=arr.A[i];
    }
}
    return min;
}


void Swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int selectionSort(struct Array *arr){    //Selection sort
    for(int i=0;i<arr->length;i++){
        for(int j=i+1;j<arr->length;j++){
            if(arr->A[j]<arr->A[i]){
                Swap(&arr->A[j],&arr->A[i]);    
            }
        }
    }

}


int main(){
 struct Array arr={{12,43,11,45,25,62,63},10,7};
  selectionSort(&arr);
  Display(arr);
    return 0;
}
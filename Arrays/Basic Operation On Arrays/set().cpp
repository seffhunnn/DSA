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

int Set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
        
    }
   

}

int main(){
 
    struct Array arr = {{2,3,4,5,6},10,5};
    Set(&arr,3,17);
    Display(arr);
    return 0;
}
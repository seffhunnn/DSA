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

void Insert(struct Array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index){
    int x = arr->A[index];
    for(int i=index;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    
    return x;

}



int main(){
 
    struct Array arr={{2,3,4,5,6},10,5};
    //Insert(&arr,2,17);
    Insert(&arr,4,10);
    Display(arr);
    return 0;
}
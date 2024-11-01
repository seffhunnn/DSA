#include<iostream>
using namespace std;
 
struct Array{
    int A[10];
    int size;
    int lenght;
};
void Display(struct Array arr)
{
    cout<<"Elements are: ";
    for(int i=0;i<arr.lenght;i++){
        cout<<arr.A[i]<<" ";
    }
}

void Append(struct Array *arr,int x){
    if(arr->lenght<arr->size){
        arr->A[arr->lenght]=x;
        arr->lenght++;
    }

}


int main(){
 
   struct Array arr={{2,3,4,5,6},10,5};
   Append(&arr,10);
   Display(arr);
    return 0;
}
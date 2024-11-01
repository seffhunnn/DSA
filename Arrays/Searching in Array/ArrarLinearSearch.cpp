#include<iostream>
using namespace std;
 
struct Array{
    int A[10];
    int size;
    int length;
};

int LinearSearch(struct Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(key==arr.A[i]){
            return i;
            
        }
        
    }
    return -1;
}




int main(){
 
    struct Array arr={{2,3,4,5,6},10,5};
   cout<<LinearSearch(arr,15);
    return 0;
}



// Liners search by transposition or move to front
#include<iostream>
using namespace std;
 
struct Array{
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;

}

void Display(struct Array arr)
{
    cout<<"Elements are: ";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
            
        }
        
    }
    return -1;
}




int main(){
 
    struct Array arr={{2,3,4,5,6},10,5};
   cout<<LinearSearch(&arr,5)<<endl;
   Display(arr);
    return 0;
}



//Linear search by moving in front 
#include<iostream>
using namespace std;
 
struct Array{
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;

}

void Display(struct Array arr)
{
    cout<<"Elements are: ";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);  //changes made here
            return i;
            
        }
        
    }
    return -1;
}




int main(){
 
    struct Array arr={{2,3,4,5,6},10,5};
   cout<<LinearSearch(&arr,5)<<endl;
   Display(arr);
    return 0;
}
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

int Sum(struct Array arr){
    int sum =0;
    for(int i=0;i<arr.length;i++){
        sum = sum + arr.A[i];
    }
    return sum;
}


int main(){
 
    struct Array arr = {{0,99,4,17,6},10,5};
    cout<<Sum(arr);
    //Display(arr);
    return 0;
}
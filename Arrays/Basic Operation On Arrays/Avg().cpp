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

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}


int main(){
 
    struct Array arr = {{23,3,14,25,6},10,5};
    cout<<Avg(arr);
    //Display(arr);
    return 0;
}
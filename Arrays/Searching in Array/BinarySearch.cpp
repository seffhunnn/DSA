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

int BinarySearch(struct Array arr,int key){    // Using loops Iterative Binary Search
    int l,mid,h;
    l=0;h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else 
            l=mid+1;

    }
    return -1;
}

int RBinSearch(int a[],int l,int h,int key){   // Using recursion Recursive Binary Search
    int mid;

    if(l<=h){
        mid= (l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBinSearch(a,l,mid-1,key);
        else
            return RBinSearch(a,mid+1,h,key);    
    }
    return -1;
}

int main(){
 
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,5)<<endl;    //Using loop call
    cout<<RBinSearch(arr.A,0,arr.length,8);  // USing Recursion call
    return 0;
}
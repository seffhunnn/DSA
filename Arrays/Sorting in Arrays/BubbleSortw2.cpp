#include<iostream>
using namespace std;
 
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[],int n){
int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int main(){
 
    // int A[]={3,7,9,10,6,5,12,4,11,2},n=10;
    int A[]={3,7,9,10},n=4; 

    BubbleSort(A,n);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
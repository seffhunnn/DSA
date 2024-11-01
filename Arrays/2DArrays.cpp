#include<iostream>
using namespace std;
 
int main(){
 
    int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}}; // First method

    int *B[3];  //stack    // seocnd method
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    int **C;         // third meathod all in heap
    C=new int*[3];
    C[0]=new int [4];
    C[1]=new int [4];
    C[2]=new int [4];
    

    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


///////////////////////////////////////


// #include<iostream>
// using namespace std;
 
// struct Array{
//   int A[10];
//   int size;
//   int length;
// };

// void Display(struct Array arr){
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<" ";
//     }
// }

// void swap(int *x,int *y){
//     int temp = *x;
//           *x = *y;
//           *y = temp;
// }

// void selectionSort(struct Array *arr){
//     for(int i=0;i<arr->length;i++){
//         for(int j=i+1;j<arr->length;j++){
//             if(arr->A[j]<arr->A[i]){
//                 swap(&arr->A[j],&arr->A[i]);
//             }
//         }
//     }
// }

// void bubbleSort(struct Array *arr){
//     int count =1;

//     while(count<arr->length){
//         for(int i=0;i<arr->length-count;i++){
//             if(arr->A[i]>arr->A[i+i]){
//                 swap(arr->A[i],arr->A[i+1]);
//             }
//         }
//         count ++;
//     }
// }


// int main(){
//  struct Array arr={{23,56,35,124,51251,2351,14},10,7};

// bubbleSort(&arr);
// Display(arr);

//     return 0;
// }


#include<iostream>
using namespace std;
 
int main(){
 
    int n,m;
    cout<<"Enter row and column"<<endl;
    cin>>n>>m;

    int A[n][m];

    cout<<"Enter elements of matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }


     cout<<"Matrix is"<<endl;

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
     }


     int x;
     cout<<"Enter the element to search"<<endl;
     cin>>x;

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==x){
                cout<<i<<j;
            }
        }
     }


    return 0;
}
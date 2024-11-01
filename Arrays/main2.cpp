#include<iostream>
using namespace std;
 
struct Array 
{
    int A[10];
    int size;
    int length;
    
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

}

void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
    
}

void Insert(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length && arr->length<=arr->size){
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

int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

int Set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
    return -1;
}

int Max(struct Array arr){
    int max= arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    for(int i=i;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr){
    int total = 0;
    for(int i=0;i<arr.length;i++){
        total = total + arr.A[i];
    }
    return total;
}

float average(struct Array arr){
    float avg = (float)sum(arr)/arr.length;
    return avg;
}

int LinearSearch(struct Array arr,int key){
        for(int i=0;i<arr.length;i++){
            if(key==arr.A[i]){
                return i;
            }

        }
        return -1;
}

void swap(int *x,int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}

int TLinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(arr->A[i],arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int FLinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(arr->A[i],arr->A[0]);
            return i;
        }
    }
    return -1;
}




int main(){
 
    struct Array arr = {{2,99,25,8,12},10,5};
    //Append(&arr,17);
    //Insert(&arr,0,17);
    //cout<<Delete(&arr,2)<<endl;
    //Set(&arr,4,15);
    //Display(arr);
    // cout<<Min(arr);
    //cout<<average(arr);
    // cout<<TLinearSearch(&arr,25)<<endl;
    // cout<<FLinearSearch(&arr,25)<<endl;
    Display(arr);
    return 0;
}
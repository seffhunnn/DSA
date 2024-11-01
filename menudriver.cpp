#include<iostream>
using namespace std;
 
 class Array{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x,int*y);
    public:
        Array(){
            size=10;
            length=0;
            A=new int[size];
        }
        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }
        ~Array(){
            delete []A;
        }
    void Display();
    void Insert(int Index,int x);
    int Delete(int index);
    int Search(int key);
    int Sum();
 };



void swap(int *x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

void Array::Insert(int index,int x){
    if(index>=0 && index<=length){
        for(int i=length;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}

int Array::Delete(int index){
    

    if(index>=0 && index<length){
        int x= A[index];
        for(int i=index;i<length;i++){
            A[i]=A[i+1];
        }
        length--;
        return x;
    }
}

int Array::Search(int key){
    for(int i=0;i<length;i++){
        if(key==A[i]){
            return i;
        }
        
    }
    return -1;
}

int Array::Sum(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum = sum +A[i];
    }
    return sum;
}




int main(){
    
    Array *arr1;
    int ch,sz;
    int x;
    int index;

    cout<<"Enter Size of Array: ";
    cin>>sz;
    arr1=new Array(sz);
 
   do{
        cout<<endl<<"Menu"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Search"<<endl;
        cout<<"4. Sum"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>ch;

   switch(ch){

        case 1: cout<<"Enter an element and index: ";
                cin>>x>>index;
                arr1->Insert(index,x);
                break;
        
        case 2: cout<<"Enter the index to delete the element: ";
                cin>>index;
                arr1->Delete(index);
                break;
        
        
        case 3: cout<<"Enter the element to search for: ";
                cin>>x;
                arr1->Search(x);
                break;
        
        
        case 4: cout<<"Sum is: ";
                cout<<arr1->Sum();
                break;
        
        
        case 5: cout<<"Elements are: ";
                arr1->Display();
                break;
            
        case 6: cout<<"Exiting program."<<endl;
                break;
   }
         
   } while(ch!=6);

    delete arr1;
    return 0;
}

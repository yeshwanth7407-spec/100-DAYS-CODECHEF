#include<iostream>
using namespace std;

void Bubble_Sort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

void Insertion_Sort(int* arr,int n){
    for(int i=1;i<n;i++){
        int t=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>t){
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
}

void selection(int* arr,int n){
    for(int i=0;i<n;i++){
        int t=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<t){
                arr[j]=arr[i];
                
            }
        }
    }
}

void Print(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY:";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Bubble_Sort(arr,n);
    // Insertion_Sort(arr,n);
    // selection(arr,n);
    Print(arr,n);
}
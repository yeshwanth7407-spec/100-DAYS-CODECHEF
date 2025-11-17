#include<iostream> //SELECTION SORT
using namespace std;

void SelectionSort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int t=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[t]){
                t=j;
            }else{
                continue;
            }
        }
        int a=arr[i];
            arr[i]=arr[t];
            arr[t]=a;
    }
}

void print(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no.of elements in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    SelectionSort(arr,n);
    print(arr,n);

    return 0;

    
}
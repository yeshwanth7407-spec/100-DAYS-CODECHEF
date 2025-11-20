#include<iostream>
using namespace std;

void count(int n){
    if(n>0){
        int count=0;
        while(n!=1){
            if(n%2==0){
                n/=2;
            }else{
                n=(n*3)+1;
            }
            count++;
        }
        cout<<count<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    count(n);
}
#include<iostream>
using namespace std;

int Sequence(int x){
    if(x==1 || x==2){
        return 1;
    }else{
        return Sequence(Sequence(x-1))+Sequence(x-Sequence(x-1));
    }
}

int main(){
    int n;
    cout<<"ENTER THE Nth POSITION IN NEWMAN CONWAY SEQUENCE:";
    cin>>n;
    cout<<Sequence(n);
    return 0;
}
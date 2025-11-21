#include<iostream>
using namespace std;

void Notation(int* x,int* y){
    if(*x > 12){
        cout<<(*x)-12<<":"<<*y<<" P"<<endl;
    }else{
        cout<<*x<<":"<<*y<<" A"<<endl;
    }
}

int main(){
    int x,y;
    cout<<"ENTER THE HOUR AND MINUTES:";
    cin>>x>>y;
    Notation(&x,&y);
    return 0;

}
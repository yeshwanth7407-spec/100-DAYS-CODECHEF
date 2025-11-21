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
    if(0<=x && x<=24 && 1<=y && y<=60){
    Notation(&x,&y);
    }
    return 0;

}
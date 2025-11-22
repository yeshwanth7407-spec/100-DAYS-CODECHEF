#include<iostream>
using namespace std;

void Complex(int* a,int* b,int* c,int* d){
    int x=((*a)*(*c))-((*b)*(*d));
    int y=((*b)*(*c))+((*a)*(*d));
    cout<<"RESULT:"<<x<<"+i"<<y;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Complex(&a,&b,&c,&d);

    return 0;
}
#include<iostream>
using namespace std;

int Toss(int n){
    if(n>0){
        int head=0,tail=0;
        while(n--){
            int x=rand()%2;
            if(x==1){
                head++;
            }else if(x==0){
                tail++;
            }
        }
        cout<<head<<" "<<tail<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of times you wanna toss the coin:";
    cin>>n;
    Toss(n);
}
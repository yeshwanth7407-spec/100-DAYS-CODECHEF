#include <iostream>
using namespace std;

int power(int a, int b){
    int power = 1;
    while (b--){
        power *= a;
    }
    cout << power << endl;
}

int main(){
    power(5, 2);
    
    return 0;
}
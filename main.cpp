#include <iostream>
#include "lib.cpp"
using namespace std;

char let = 'a';
bool v=0;

void verifica(char z) {
    if (z>=65 and 90>=z or z>=97 and 122>=z){
        v=1;
    }else{
        v=0;
    }
}

int main() {
    cin >> let;
    verifica(let);
    if(v==1){
        cout << conv(let);
    }
    if(v==0){
        cout << "errore" <<endl;
    }
    return 0;
}

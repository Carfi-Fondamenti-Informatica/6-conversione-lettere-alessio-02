#include <iostream>
#include "lib.cpp"
using namespace std;

char let = 'a';
bool v;

void verifica(char z) {
    if (z>=65 and 90>=z or z>=97 and 122>=z){
        v= true;
    }else{
        v= false;
    }
}

int main() {
    cin >> let;
    verifica(let);
    if(v== true){
        cout << conv(let);
    }
    if(v== false){
        cout << "errore" <<endl;
    }
    return 0;
}


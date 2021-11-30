#include <iostream>
#include "lib.cpp"
using namespace std;

int main() {
    char let = 'a';
    cin >> let;
    if(verifica(let)==true){
        cout << conv(let);
    }
    if(verifica(let)==false){
        cout << "errore" <<endl;
    }
    return 0;
}


#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char let = 'a';
    cin >> let;
    if(verifica(let)==true){
        cout << conv(let) <<endl;
    }
    if(verifica(let)==false){
        cout << "errore" <<endl;
    }
    return 0;
}


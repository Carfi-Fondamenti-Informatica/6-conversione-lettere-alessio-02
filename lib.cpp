
#include "lib.h"

bool verifica(char z) {
    if (z>=65 and 90>=z or z>=97 and 122>=z){
        return true;
    }else{
        return false;
    }
}

char conv(char &let) {
    if (let>=65 and 90>=let){
        let=let+32;
    }
    else if (let>=97 and 122>=let){
        let=let-32;
    }
    return let;
}

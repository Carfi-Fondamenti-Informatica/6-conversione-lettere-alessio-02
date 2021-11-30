
#include "lib.h"
char conv(char &let) {
    if (let>=65 and 90>=let){
        let=let+32;
    }
    else if (let>=97 and 122>=let){
        let=let-32;
    }
    return let;
}

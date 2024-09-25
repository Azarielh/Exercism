#include "collatz_conjecture.h"

    

int steps(int n){
    int count = 0;
    if (n <= 0) return -1;
    while (n > 1){
        if (n %2 == 0){
            n = n /2;
        } else {
            n = 3 * n +1;
        }
        count++;
    }
    return count;
}
#include "hamming.h"
#include "stddef.h"

int compute(const char *lhs, const char *rhs){
    int dif = 0;
    int i = 0;
    int lhslen = 0;
    int rhslen = 0;

    while (lhs[i++])
        lhslen++;
    i = 0;
    while (rhs[i++])
        rhslen++;
    if (rhslen != lhslen)
        return (-1);
    i = 0;
    while (lhs[i] && rhs[i]){
         if (lhs[i] != rhs[i])
            dif++;
        i++;
    }
    return dif;
}

#include "grains.h"
#include "math.h"


uint64_t square(uint8_t index) {
    
    if (index==0) {
    return 0;
  } else {
    return powl(2,index-1);
  }
}

uint64_t total(void){
    int count = 0;
    uint64_t i = 0;
    while (count < 65){
        i += square(count);
        count ++;
    }
    return i;
}

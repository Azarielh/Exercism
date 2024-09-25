#include "resistor_color_duo.h"
#include "stdint.h"

int color_code (resistor_band_t c1, resistor_band_t c2){
    if (c1 + c2 == 01){
        return 10;
    } else return c1 + c2;
}
uint16_t colors = [BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE];
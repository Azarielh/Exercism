#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H


typedef enum {
    BLACK = 0,
    BROWN = 1,
    RED   = 2,
    ORANGE= 3,
    YELLOW= 4,
    GREEN = 5,
    BLUE  = 6,
    VIOLET= 7,
    GREY  = 8,
    WHITE = 9
} resistor_band_t;

int color_code(resistor_band_t c1, resistor_band_t c2);
resistor_band_t* colors(void);

#endif

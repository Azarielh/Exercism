#include "queen_attack.h"
#include <stdlib.h> // Pour abs()

attack_status_t can_attack(position_t white_queen, position_t black_queen){
    // vérifier si les positions ddes dames sont invalides
    if (white_queen.column == black_queen.column && white_queen.row == black_queen.row){
      return INVALID_POSITION;  
    } else if(white_queen.column == 0 || black_queen.column == 0){
        return INVALID_POSITION;
    // vérifier si les dames sont sur la même colonne
    } else if(white_queen.column == black_queen.column && white_queen.row !=     
              black_queen.row){
                               return 1;
                              }
    // vérifier si les dames sont sur la même ligne
    else if (white_queen.column != black_queen.column && white_queen.row ==     
              black_queen.row){
                               return 1;
                              }
    else     if (abs(white_queen.column - black_queen.column) == abs(white_queen.row - black_queen.row)) {
        return CAN_ATTACK;
    }
    else return 0;
}
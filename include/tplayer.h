#ifndef TYR_PLAYER_H
#define TYR_PLAYER_H

#include <titem.h>

void tyr_setPlayerName(char* name);
void tyr_getPlayerHealth(int* hp, int* max_hp);
void tyr_getPlayerStamina(int* stm, int* max_stm);
void tyr_getPlayerMana(int* man, int* max_man);
tyr_item_t* tyr_getPlayerInventory(char sort);

#endif // TYR_PLAYER_H
#include "tplayer.h"

static char* player_name;
static int player_hp, player_mhp;
static int player_stm, player_mstm;
static int player_man, player_mman;
static tyr_item_t[20] inventory = {};

void tyr_setPlayerName(char* name) {
    player_name = name;
}

void tyr_getPlayerHealth(int* hp, int* max_hp) {
    *hp = player_hp;
    *max_hp = player_mhp;
}

void tyr_getPlayerStamina(int* stm, int* max_stm) {
    *stm = player_stm;
    *max_stm = player_mstm;
}

void tyr_getPlayerMana(int* man, int* max_man) {
    *man = player_man;
    *max_man = player_mman;
}

void selection_sort() {
    for(int i = 0; i < 20 - 1; i++) {
        int min = i;
        
        for(int j = i + 1; j < 20; j++) {
            if(inventory[min].order < inventory[j].order) {
                min = j;
            }
        }

        tyr_item_t temp = inventory[min];
        inventory[min] = inventory[i];
        inventory[i] = temp;
    }
}

tyr_item_t* tyr_getPlayerInventory(char sort) {
    if(inventory[0] == 0)
        return NULL;

    if(!sort)
        return inventory;

    selection_sort();
    return inventory;
}
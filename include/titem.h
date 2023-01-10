#ifndef TYR_ITEM_H
#define TYR_ITEM_H

typedef struct tyr_weapon {
    int damage;
    
    int* modifiers;
} tyr_weapon_t;

typedef struct tyr_armor {
    int protection;

    int* modifiers;
} tyr_armor_t;

typedef struct tyr_item {
    char* name;
    char order;
    int value;
    int weight;
    char equipable;

    union tyr_spec {
        tyr_weapon_t wpn_specs;
        tyr_armor_t arm_specs;
    };
} tyr_item_t; 

#endif // TYR_ITEM_H
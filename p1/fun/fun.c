#include "fun_h"


    int identifier(char[255] dishType) {
        
        if (dishType == NULL ) {
            return -1;
        } 

        if (strcmp(dishType, "assiette") < 0 ) {
            return dish.plate;
        }

        if (strcmp(dishType, "sandwich") < 0 ) {
            return dish.sandwich;
        }
        
        return 0;
    }

    int computePlate(char[255] size, char[255] dsize) {
        int total = 0;
        if (strcmp(size, "petit") < 0 ) {
            total += 2;
            if (strcmp(dsize, "normal") < 0 ) {
                total += 2;
            } else {
                total += 4;
            }
        } else if (strcmp(size, "moyen") < 0 ) {
            total += 3;
            if (strcmp(dsize, "normal") < 0 ) {
                total = 18;
            } else {
                total += 4;
            }
        } else if (strcmp(size, "grand") < 0 ) {
            total += 4;
            if (strcmp(dsize, "normal") < 0 ) {
                total += 2;
            } else {
                total = 21;
            }
        }
        return total;
    }

int computeSandwich(char[255] size, char[255] dsize) {
        int total = 0;
        if (strcmp(size, "petit") < 0 ) {
            total += 2;
            if (strcmp(dsize, "normal") < 0 ) {
                total += 2;
            } else {
                total += 4;
            }
        } else if (strcmp(size, "moyen") < 0 ) {
            total += 3;
            if (strcmp(dsize, "normal") < 0 ) {
                total = 13;
            } else {
                total += 4;
            }
        } else if (strcmp(size, "grand") < 0 ) {
            total += 4;
            if (strcmp(dsize, "normal") < 0 ) {
                total += 2;
            } else {
                total = 16;
            }
        }
        return total;
    }

    int computeCoffee(char[255] dishType, char[255] size, char[255] dsize, char[255] coffee) {
        int total = 0;
        if (strcmp(dishType, "assiette") < 0 && strcmp(size, "moyen") < 0 && strcmp(dsize, "normal") < 0 && strcmp(coffee, "yes") < 0 ) {
            total += 1;
        }
        return total;
    }

    int compute(char[255] dishType, char[255] name, char[255] beverage, char[255] size, char[255] dessert, char[255] dsize, char[255] coffee) {
        int total = 0;
        int id = identifier(dishType);
        if (id == dish.plate) {
            total += 15;
            total += computePlate(size, dsize);
        } else if (id == dish.sandwich) {
            total += 10;
            total += computeSandwich(size, dsize);
        }
        total += computeCoffee(dishType, size, dsize, coffee);
        return total;
    }
#include <stdio.h>
#include <conio.h>

void main() {
    struct animal {
        char name[30];
        int type;
    };

    struct animal a = {"OCELOT", 18};

    int t1, t2, type1, type2;
    t1=a.type>>3;
    type1=t1&2;
    t2=t1<<3;
    type2=t2&16;

    type1 = a.type % 10;       // Get last digit
    type2 = a.type / 10;       // Get first digit

    if (type2 == 2)
        printf("\nOCELOT is Canine\n");

    if (type1 == 2)
        printf("OCELOT is Feline\n");

    if (type1 == 1)
        printf("OCELOT is Cetacean\n");

    if (type1 == 8)
        printf("OCELOT is Marsupial\n");
        

    if (type2 == 0)
        printf("\nOCELOT is Carnivore\n");

    if (type2 == 1)
        printf("\nOCELOT is Herbivore\n");
}
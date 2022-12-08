#include "Animal.h"

int main()
{
    Cheetah C; // 100
    Antelope A; //80
    Lion L; // 70
    Dog D; // 60
    Human H; // 30
    Horse Ho; // 60

    compareAnimalSpeed(&C, &A);
    compareAnimalSpeed(&L, &D);
    compareAnimalSpeed(&A, &C);
    compareAnimalSpeed(&H, &L);
    compareAnimalSpeed(&Ho, &H);
    compareAnimalSpeed(&D, &Ho);
    return 0;
}

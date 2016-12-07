/*
    Tárgy: Elte IK Operációs rendszerek 1. Beadandó
    Készítette: Sándor Balázs - AZA6NL
	Git: https://github.com/SandorBalazsHU/elte-ik-os-1

    A program belépési pntja.
*/
#include <stdio.h>
#include "./Kos.h"

int main(int argc, char** argv)
{
    if(test(argc, argv))
    {
        return 0;
    }

    clearScrean();
    printIntro();

    char* mainMenu[3];
    mainMenu[0] = "Jelentkezés         ";
    mainMenu[1] = "Adminisztráció      ";
    mainMenu[2] = "Kilépés             ";
    printMenu(mainMenu, 3);

    char selectedMainMenuitem = menuGenerator("123");
    printf(" - Selected: %c \n", selectedMainMenuitem);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Tente advinhar o numero da sorte entre 1-9! Escolha o seu numero:");
    scanf("%d", &a);

    switch (a)
    {
    case 1 :
        printf("Este numero e inferior ao numero da sorte");
        break;
    case 2 :
        printf("Este numero e inferior ao numero da sorte");
        break;
    case 3 :
        printf("Este numero e inferior ao numero da sorte");
        break;
    case 4 :
        printf("Este numero e inferior ao numero da sorte");
        break;
    case 5 :
        printf("Este numero e inferior ao numero da sorte");
        break;
    case 6 :
        printf("Parabens!!! Advinhou o numero da sorte!");
        break;
    case 7 :
        printf("Este numero e superior ao numero da sorte");
        break;
    case 8 :
        printf("Este numero e superior ao numero da sorte");
        break;
    case 9 :
        printf("Este numero e superior ao numero da sorte");
        break;

    }
    return 0;
}

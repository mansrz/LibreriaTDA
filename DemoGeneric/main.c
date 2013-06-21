/* 
 * File:   main.c
 * Author: daniel
 *
 * Created on May 30, 2012, 10:43 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../LibreriaTDA/include/generic.h"

#define num 5
/*
 * 
 */
int main(int argc, char** argv) {
    Generic a=NULL,b=NULL;
    Generic car[num],temp;
    int valor,i;
    char new_car;
/*
    a=integerNew(1);
    b=integerNew(4);

    valor=integerGet(a)+integerGet(b);
    for (i=0;i<valor;i++)
    {
        integerSet(a,integerGet(a)+1);

    }
    
    integerPrint(a);
    integerPrint(b);


    switch (integerCmp(a,b))
    {
        case 0: printf("iguales \n");
        case -1: printf("a<b \n");
        case 1: printf("a>b \n");
    }
    

    */
    for (i=0;i<num;i++)
    {
        car[i]=charNew(65+i);
    }
    for (i=0;i<num;i++)
    {
        charPrint(car[i]);
    }
    printf("\nIngrese una letra\n");
    scanf("%c",&new_car);
    temp=charNew(new_car);

    for (i=0;i<num;i++)
    {
        if (charCmp(car[i],temp)==0)
                printf("La letra esta en el arreglo\n");
    }
	getch();
return (EXIT_SUCCESS);

}


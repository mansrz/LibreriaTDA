/* 
 * File:   main.c
 * Author: daniel
 *
 * Created on November 11, 2011, 8:34 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "../LibreriaTDA/include/stack.h"
#include "../LibreriaTDA/include/generic.h"
/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    Generic * dato;
    Stack * pila;
    NodeList* node_dato;

    pila =stackNew();

    for (i=1;i<10;i++)
    {
        dato=integerNew(i);
        node_dato=nodeListNew(dato);
        stackPush(pila,node_dato);
       
        //stackPush(pila,nodeListNew(integerNew(i))); //verion compacta de los tres pasos anteriores
        //printf("%d\n",integerGet(nodeListGetCont(stackPeek(pila))));

    }

    printf("numero de elementos %d\n",stackGetSize(pila));
    

    while (!stackIsEmpty(pila))
    {
        node_dato=stackPop(pila);
        dato=nodeListGetCont(node_dato);
        i=integerGet(dato);
        //i=integerGet(nodeListGetCont(stackPop(pila)));

        printf("%d\n",i);

    }
	getch();
    return (EXIT_SUCCESS);
}


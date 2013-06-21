

#include <stdio.h>
#include <stdlib.h>
#include "..\LibreriaTDA\include\list.h"
#include "..\LibreriaTDA\include\generic.h"
#include "..\LibreriaTDA\include\quebrado.h"
#include <conio.h>


//escriba una función que dada una lista inserte un elemento
//de forma ordenada
void listInsertInOrder(List *L, NodeList *nuevo, cmpfn f);
//escriba una función que dada una lista retorne otra
//con los mismos elementos pero ordenados
List *listSort(List *L, cmpfn f);
//funcion que dada una lista y un valor, retorne una lista con
//todos los nodos que contengan dicho valor
List *listSearchAll(List *L, Generic value, cmpfn f);
//escriba una función que convierta una lista a un arreglo de cadenas
char **listToString(List *L, char *(*f)(Generic g));
//escriba una función que dada una lista, remueva los
//elementos repetidos
List *listRemoverRep(List *L, cmpfn f);


int main() {
    List *L=NULL, *M=NULL, *Lordenada=NULL;    
    L = listNew();
    
    listAddNode(L, nodeListNew(quebradoNew(2,3)));
    listAddNode(L, nodeListNew(quebradoNew(5,5)));
    listAddNode(L, nodeListNew(quebradoNew(6,9)));
    listAddNode(L, nodeListNew(quebradoNew(5,8)));
    listAddNode(L, nodeListNew(quebradoNew(5,3)));
    listPrint(L, (void *)quebradoPrint);
      printf("---------\n");

    Lordenada = listSearchAll(L, integerNew(5), (void *)quebradoCmpxNum);
    listPrint(Lordenada, (void *)quebradoPrint);
    printf("---------\n");
    M = listNew();
    listInsertInOrder(M, nodeListNew(quebradoNew(2,3)), (void *)quebradoCmpDenominadores);
    listInsertInOrder(M, nodeListNew(quebradoNew(5,5)), (void *)quebradoCmpDenominadores);
    listInsertInOrder(M, nodeListNew(quebradoNew(6,9)), (void *)quebradoCmpDenominadores);
    listInsertInOrder(M, nodeListNew(quebradoNew(5,8)), (void *)quebradoCmpDenominadores);
    listInsertInOrder(M, nodeListNew(quebradoNew(5,3)), (void *)quebradoCmpDenominadores);
    listPrint(M, (void *)quebradoPrint);
getch();
	return(0);

}


char **listToString(List *L, char *(*f) (Generic)){
    char **A = malloc(sizeof(char *) * listGetSize(L));
    NodeList *viajero;  int i = 0;
    for(viajero = listGetHeader(L); viajero!=NULL; viajero = nodeListGetNext(viajero)){
        A[i] =  f(nodeListGetCont(viajero));
        i++;
    }
    return A;
}
List *listRemoverRep(List *L, cmpfn cmp){
    List *N = listNew();
    NodeList *viajero;
    for(viajero = listGetHeader(L); viajero!=NULL; viajero = nodeListGetNext(viajero)){
        NodeList *p = listSearch(N, nodeListGetCont(viajero), cmp);
        if(p == NULL) listAddNode(N, nodeListNew(nodeListGetCont(viajero)));
    }
    return N;
}


void listInsertInOrder(List *L, NodeList *nuevo, cmpfn cmp){
    NodeList *viajero;
    if(listIsEmpty(L)) { listAddFirst(L, nuevo); return; }
    if(cmp(nodeListGetCont(nuevo), nodeListGetCont(listGetHeader(L))) <= 0){
        listAddFirst(L, nuevo); return;}
    for(viajero = listGetHeader(L); viajero!=NULL; viajero = nodeListGetNext(viajero)){
        if(cmp(nodeListGetCont(nuevo), nodeListGetCont(viajero)) <= 0){
            NodeList *ant = listGetPrevious(L, viajero);
            listAddNext(L, ant, nuevo);
            return;
        }
    }
    listAddNode(L, nuevo);
}

List *listSort(List *L, cmpfn cmp){
    List *N = listNew();
    NodeList *viajero;
    for(viajero = listGetHeader(L); viajero!=NULL; viajero = nodeListGetNext(viajero)){
        listInsertInOrder(N, nodeListNew(nodeListGetCont(viajero)), cmp);
    }
    return N;
}

List *listSearchAll(List *L, Generic value, cmpfn cmp){
    List *N = listNew();
    NodeList *viajero;
    for(viajero = listGetHeader(L); viajero!=NULL; viajero = nodeListGetNext(viajero)){
        if(cmp(nodeListGetCont(viajero), value) == 0)
            listAddNode(N, nodeListNew(nodeListGetCont(viajero)));
    }
    return N;
}

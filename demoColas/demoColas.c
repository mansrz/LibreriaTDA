
#include <stdio.h>
#include <stdlib.h>
#include "../LibreriaTDA/include/heap.h"
#include "../LibreriaTDA/include/generic.h"

main(){
    Heap *H = heapNew(100, ASC, integerCmp);
    heapEnQueue(H,integerNew(20));
    heapEnQueue(H,integerNew(5));
    heapEnQueue(H,integerNew(1));
    heapEnQueue(H,integerNew(98));
    heapEnQueue(H,integerNew(10));
    listPrint(heapSort(H), integerPrint);
	getch();
    return 0;
}
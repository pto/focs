#include "../focs.h"

#include <stdio.h>

DefCell(int, CELL, LIST);

main() {
    CELL c1, c2, c3, *p;
    LIST list;

    c1.element = 42;
    c1.next = NULL;
    c2.element = 123;
    c2.next = &c1;
    c3.element = 32768;
    c3.next = &c2;

    list = &c3;

    for (p = list; p; p = p->next) {
        printf("%d\n", p->element);
    }
}

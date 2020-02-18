#include <stdio.h>

typedef int type1[10];
typedef type1 *type2;
typedef struct {
    int field1;
    type2 field2;
} type3;
typedef type3 type4[5];

main() {
    type4 a;
    (*(a[0].field2))[3] = 99;
    printf("%d\n", (*a[0].field2)[3]);
}

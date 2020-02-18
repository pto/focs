#ifndef FOCS_H
#define FOCS_H

#define TRUE 1
#define FALSE 0
typedef int BOOLEAN;

#define DefCell(EltType, CellType, ListType)                           \
   typedef struct CellType *ListType;                                  \
   typedef struct CellType {                                                   \
       EltType element;                                                \
       ListType next;                                                  \
   } CellType

#endif

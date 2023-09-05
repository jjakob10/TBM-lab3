#ifndef _B_H_
#define _B_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct Binarytree Binarytree;

Binarytree *createBinary();

void insertBinary(int item);

void destroyBinary(Binarytree *b);


#endif

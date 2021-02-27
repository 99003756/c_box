#ifndef BOX_H
#define BOX_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct box
{
    int UID;
    char name[MAX];
};
int size=3;
struct box *w1;
    

void enter(struct box *w1);
struct box print_details(struct box *);
int search_code(struct box *);

  
#endif
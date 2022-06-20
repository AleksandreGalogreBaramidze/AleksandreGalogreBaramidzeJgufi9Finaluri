#include "functions.h"
#include<stdio.h>
#define MAXLINE 1000



int mystrlen(char *t)
{
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}

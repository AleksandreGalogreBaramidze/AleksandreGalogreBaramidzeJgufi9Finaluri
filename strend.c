#include "functions.h"
#include<stdio.h>
#define MAXLINE 1000

int strend(char *s,char *t)
{
    int len;
    len=mystrlen(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;
            
    --t;
    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
    else {
    	return 0;
    }
}


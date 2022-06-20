#include "functions.h"
#include<stdio.h>
#define MAXLINE 1000


int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    int ret;
    mgetline(s,MAXLINE);
    mgetline(t,MAXLINE);
    ret = strend(s,t);
    printf("%d",ret);

}

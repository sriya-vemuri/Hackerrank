#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int h,m,s;
    char str[3];
    scanf("%d:""%d:""%d""%s",&h,&m,&s,str);
    if(h==12 && strcmp(str,"AM")==0)
    h=00;
    if(strcmp(str,"PM")==0 && h!=12)
    h=h+12;
    printf("%02d:%02d:%02d",h,m,s);
}

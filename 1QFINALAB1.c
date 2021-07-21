#include <stdio.h>

int main(){

int r, g, b;
do{
scanf ("%d %d %d", &r, &g, &b);
if (r != -1 && g != -1 && b != -1){printf ("#%.2X%.2X%.2X\n", r, g, b);}
}while (r != -1 || g != -1 || b != -1);
return 0;
}

#include <stdio.h>
#include <string.h>

int hex_rgb (char a, char b){
    int x, y;
    if (a == '0'){x = 0;}
    if (a == '1'){x = 1;}
    if (a == '2'){x = 2;}
    if (a == '3'){x = 3;}
    if (a == '4'){x = 4;}
    if (a == '5'){x = 5;}
    if (a == '6'){x = 6;}
    if (a == '7'){x = 7;}
    if (a == '8'){x = 8;}
    if (a == '9'){x = 9;}
    if (a == 'A'){x = 10;}
    if (a == 'B'){x = 11;}
    if (a == 'C'){x = 12;}
    if (a == 'D'){x = 13;}
    if (a == 'E'){x = 14;}
    if (a == 'F'){x = 15;}
    x = x * 16;
    if (b == '0'){y = 0;}
    if (b == '1'){y = 1;}
    if (b == '2'){y = 2;}
    if (b == '3'){y = 3;}
    if (b == '4'){y = 4;}
    if (b == '5'){y = 5;}
    if (b == '6'){y = 6;}
    if (b == '7'){y = 7;}
    if (b == '8'){y = 8;}
    if (b == '9'){y = 9;}
    if (b == 'A'){y = 10;}
    if (b == 'B'){y = 11;}
    if (b == 'C'){y = 12;}
    if (b == 'D'){y = 13;}
    if (b == 'E'){y = 14;}
    if (b == 'F'){y = 15;}
    return (x + y);
}

int main(){

char rgb[7];
int r, g, b;
do{
scanf ("%s", rgb);
r = hex_rgb(rgb[1], rgb[2]);
g = hex_rgb(rgb[3], rgb[4]);
b = hex_rgb(rgb[5], rgb[6]);
if (strcmp(rgb, "EOF"))printf("%d %d %d\n", r, g, b);
}while(strcmp(rgb, "EOF"));
return 0;
}

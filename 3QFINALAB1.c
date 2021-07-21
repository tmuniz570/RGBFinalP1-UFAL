#include <stdio.h>

int main(){
    int tamanho, i, x, y, ok;
    do{
    ok = 1;
    scanf ("%d", &tamanho);
    int linha[tamanho], coluna[tamanho];
    for (i=0;i<tamanho;i++){
        linha[i] = -1;
        coluna[i] = -1;
    }
    for (i=0;i<tamanho;i++){
        scanf ("%d %d", &x ,&y);
        if (linha[x] != -1 || coluna[y] != -1){ok = 0;}
        else{
            linha[x] = 1;
            coluna[y] = 1;
        }
    }
    if (ok == 1 && tamanho != -1){
        printf ("OK\n");
    }
    else if (ok == 0 && tamanho != -1){
        printf ("FAIL\n");
    }
    }while (tamanho != -1);
}

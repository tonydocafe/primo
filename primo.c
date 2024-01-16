#include "primo.h"
#include<stdio.h>

int primos_entre_si(int x, int y){
    int naoprimo = 0; 
    for(int i = 2; i <= x; i++){
        if(x % i == 0 && y % i == 0){
            naoprimo++;
        }
    }
    if (naoprimo == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int primo(int n){
    int resultado = 0;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            resultado++;
            break;
        }
    }
    if(resultado == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void resultado(int entre, int pp, int ps, int p, int s){
    if (entre == 1)printf("%i e %i são primos entre si\n", p, s);
    else printf("%i e %i não são primos entre si\n", p, s);
    if (pp == 1)printf("%i é primo\n",p);
    else printf("%i não é primo\n",p);
    if (ps == 1)printf("%i é primo\n",s);
    else printf("%i não é primo\n",s);
}

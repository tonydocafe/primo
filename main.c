#include "primo.h"
#include<stdio.h>

int main(){
    int p, s;  
    
    printf("Digite dois números para ver se são primos entre si:\n");
    scanf("%d", &p);
    printf("\n");
    scanf("%d", &s);

    int entre = primos_entre_si(p, s);
    int pp = primo(p);
    int ps = primo(s);

    resultado(entre, pp, ps, p, s);

    return 0; 
}

#include <stdio.h>

int main(){
    int multiplicador = 1, resultado, num;
    printf("Tabuada de qual numero: ");
    scanf("%d",&num);

    while(multiplicador <= 10){
        resultado = num * multiplicador;
        printf("%d x %d = %d\n", num, multiplicador, resultado);
        multiplicador = multiplicador + 1;
    }

    return 0;

}
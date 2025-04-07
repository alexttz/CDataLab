#include <stdio.h>

int fatorial (int n){
    if (n == 0){ //Aqui se concentra o caso base, que dá a condição de resolvido o problema
        return 1;
    }
    else{
        return n * fatorial(n - 1); 
    }
    int main(){
        int resultado = fatorial(3);
        printf("O resultado do fatorial é %d\n",resultado);
        return 0;
    }
}
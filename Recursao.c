#include <stdio.h>
/*
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
*/
// Exemplo usando Fibonacci

int fibonacci (int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2); //Esta é a chamada recursiva que instância os casos
}

int main(){
    int n=5;
    printf("O resultado é de %d\n", fibonacci(n));
    return 0;
}
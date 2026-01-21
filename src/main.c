#include <stdio.h>

//1. Debes declarar una función llamada `is_even`.
//2. La función `is_even` debe devolver un valor de tipo `int`.
//3. La función `is_even` debe recibir **un parámetro de tipo `int`**.
//4. La función `is_even` debe devolver: `1` si el número recibido es par, `0` si el número recibido **no** es par

int is_even(int number) {
    if (number %2 == 0) {
        return 1;
    }
    return 0;
}

int main() {

    int number;
    
    printf("Ingrese un numero: ");
    scanf("%i", &number);

    if (is_even(number)) {
        printf("El numero es par");
    }
    else {
        printf("El numero es impar");
    }

    return 0;
}

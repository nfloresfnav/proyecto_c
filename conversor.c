#include <stdio.h>

int main () {
    int opcion;
    double cantidad, resultado;
    double dolar = 7.8;
    double euro = 8.9;
    printf("Conversor de Divisas\n");
    printf("Seleccione una opción\n");
    printf("1. Dolares a quetzales\n");
    printf("2. Quetzales a dolares\n");
    printf("3. Euro a quetzal\n");
    printf("4. Quetzal a Euro\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
        printf("Ingrese la cantidad en dolares: \n");
        scanf("%lf", &cantidad);
        resultado = cantidad * dolar;
        printf("%2.f USD = %2.f GTQ\n", cantidad, resultado);
        break;

        case 2:
        printf("Ingrese la cantidad en Quetzales: \n");
        scanf("%lf", &cantidad);
        resultado = cantidad / dolar;
        printf("%.2f GTQ = %.2f USD\n", cantidad, resultado);
        break;

        case 3:
        printf("Ingrese la cantidad en euros: ");
        scanf("%lf", &cantidad);
        resultado = cantidad * euro;
        printf("%.2f EU = %.2f GTQ\n", cantidad, resultado);
        break;

        case 4:
        printf("Ingrese la cantidad en quetzales: ");
        scanf("%lf", &cantidad);
        resultado = cantidad / euro;
        printf("%.2f GTQ = %.2f EU\n", cantidad, resultado);
        break;

        default:
        printf("Opción no válida.");
    }
    return 0;
}
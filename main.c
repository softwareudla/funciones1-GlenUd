#include <stdio.h>
#include "funciones.h"

int main() {
    char productos[10][30];
    float precios[10];
    int cantidad;
    //
    printf("Ingrese el número de productos (máximo 10): ");
    scanf("%d", &cantidad);
    LeerNombreProductos(productos, precios, cantidad);
    // 
    printf("Precio total del inventario: %.2f\n", alcularValorTotal(precios, cantidad));
    // 
    int caro = ProductoMasCaro(precios, cantidad);
    printf("El producto más caro es: %s con un precio de %.2f\n", productos[caro], precios[caro]);
    //
    int barato = ProductoMasBarato(precios, cantidad);
    printf("El producto más barato es: %s con un precio de %.2f\n", productos[barato], precios[barato]);
    //
    printf("Precio promedio de todos los productos: %.2f\n", CalcularPromedio(precios, cantidad));
    //
    char BuscarNombreProducto[30];
    printf("Ingrese el nombre del producto a buscar: ");
    scanf("%s", &BuscarNombreProducto);
    //
    int indice = BuscarProducto(productos, BuscarNombreProducto, cantidad);
    if (indice != -1) {
        printf("El producto %s tiene un precio de %.2f\n", productos[indice], precios[indice]);
    } else {
        printf("Producto no encontrado.\n");
    }
    return 0;
}
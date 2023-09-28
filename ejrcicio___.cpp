#include<stdio.h>
int main (){
	char nombres[10][50]={
		"juan",
		"emiliano",
		"laura",
		"hugo",
		"marco",
		"fernanda",
		"alonso",
		"constanza",
		"daniel",
		"elena",
     };
      int opcion;
    printf("¿Que quieres hacer?\n");
    printf("1. Imprimir un nombre\n");
    printf("2. Imprimir todos los nombres\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        int numeroDeLista;
        printf("Ingresa el numero de la lista del nombre que quieres imprimir (1-10): ");
        scanf("%d", &numeroDeLista);

        if (numeroDeLista >= 1 && numeroDeLista <= 10) {
            printf("Nombre %d: %s\n", numeroDeLista, nombres[numeroDeLista - 1]);
        } else {
            printf("Numero de lista fuera de rango.\n");
        }
    } else if (opcion == 2) {
        printf("Lista de nombres:\n");
        for (int i = 0; i < 10; i++) {
            printf("Nombre %d: %s\n", i + 1, nombres[i]);
        }
    } else {
        printf("Opcion no valida.\n");
    }

    return 0;
}

//hacer un codigo de una lista de 10 nombres que te pueda imprmir cualquier nombre de la lista o todos /*
// imprimir

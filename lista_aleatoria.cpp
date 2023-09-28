#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
srand(time(NULL));

int indices_usados[10] = {0}; 


for (int i = 0; i < 10; i++) {
    int indiceAleatorio;
    do {
        indiceAleatorio = rand() % 10; 
    } while (indices_usados[indiceAleatorio]);

    indices_usados[indiceAleatorio] = 1; 
    printf("Nombre %d: %s\n", i + 1, nombres[indiceAleatorio]);
}

return 0;
}

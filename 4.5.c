//incluir libreria

 #include <stdio.h>
 /* Prueba de parámetros por valor.  */
 int f1 (int);      /* Prototipo de función. El parámetro es por valor
 ➥ y de tipo entero. */
void main(void)
 {
 int I, K = 4;
 for (I = 1; I <= 3; I++)
 {
 printf(“\n\nValor de K antes de llamar a la función:   %d”, ++K);
 printf(“\nValor de K después de llamar a la función: %d”, f1(K));
 /* Llamada a la función ff11. Se pasa una copia de la variable KK. */
 }
 }
 iinnttf1(iinntt  R)
 {
 R += R;
 rreettuurrnn(R);
 }

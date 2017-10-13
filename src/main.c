#include <stdio.h>

int main() {
  int a[5], modsum = 0, i2, mod0, mod1, mod2, mod3, mod4;
  //float execucao[4], bc2; // para realizar os testes
  char c;
  int n;


  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */

 	i2 = i + 1;
  	mod0 = i2 % a[0];
    mod1 = i2 % a[1];
    mod2 = i2 % a[2];
    mod3 = i2 % a[3];
    mod4 = i2 % a[4];
    //printf("mod 0..4: %d %d %d %d %d i2: %i i1: %i\n", mod0, mod1, mod2, mod3, mod4, i2, i);
    if (mod0 == 0) printf("%d", 0);
    else modsum++;
    if (mod1 == 0) printf("%d", 1);
	else modsum++;
    if (mod2 == 0) printf("%d", 2);
	else modsum++;
    if (mod3 == 0) printf("%d", 3);
	else modsum++;
    if (mod4 == 0) printf("%d", 4);
	else modsum++;

	if( modsum == 5) printf("-\n");
	else printf("\n");

	modsum = 0;

    
/*  //for debugging  
  	printf("entrou: %i\n", i2); 
    bc2 = i2%3; //bc será igual a 1
    if (bc2 == 0.0) printf("topzera\n");
    printf("%f %i\n", bc2, i2); 
*/
/*  
	// error: Floating point exception (core dumped) 
	// ler depois: Floating Point Exception happens because of an unexpected infinity or NaN. 
	// You can track that using gdb, it allows you to see what is going on inside your C program while it runs.
	// For more details : http://www.cs.swarthmore.edu/~newhall/unixhelp/howto_gdb.html

  	printf("i2: %d\n", i2);
  	execucao[0] = i2 % a[0];
    execucao[1] = i2 % a[1];
    execucao[2] = i2 % a[2];
    execucao[3] = i2 % a[3];
    execucao[4] = i2 % a[4];

    printf("execucao: %f, %f, %f, %f, %f | i2: %i\n", execucao[0], execucao[1], execucao[2], execucao[3], execucao[4], i2);

    execucao[0] = 0;
    execucao[1] = 0;
    execucao[2] = 0;
    execucao[3] = 0;
    execucao[4] = 0;
*/

    
  }

  return 0;
}

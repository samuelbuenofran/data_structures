/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
  int array[] = {};
  int invertedArray[] = {};
  int i = 0;
  int j = 0;

  for (i = 1; i <= 10; i++)
    {
      printf ("Input %d: ", i);
      scanf ("%d", &array[i]);
    }

    for (i = 10; i >= 1; i--){
        for (j = 1; j <= 10; i++){
            // printf("Taking element at position array[%d]", i);
            invertedArray[j] = array[i];
        }
    }
    
    j = 0;
    
    printf("\n{ ");
    for(j = 1; j <= 10; j++)
    {
        printf("%d", invertedArray[j]);
    }
    printf("} ");

  return 0;

}

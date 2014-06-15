#include <stdio.h>

int main () {
  int var = 20;    /* actual variable declaration */
  int *ip = NULL;  /* pointer variable declaration - always default to null */
  ip = &var;       /* store address of var in pointer variable - &var is var's address in memory */
  
  printf("Address of var variable: %p\n", &var);
  
  /* address stored in pointer variable */
  printf("Address stored in ip variable: %p\n", ip);
  
  /* access the value using the pointer */
  printf("Value of *ip variable: %d\n", *ip);
  
  return 0;
}

/* 
###########################################
int var declares a variable, var is a value, &var is it's address in memory
*ip declares a pointer, ip is the pointer (pointing to an address in memory), *ip is the value at that address
###########################################
*/

// Program output:
// Address of var variable (&var): bffd8b3c
// Address stored in ip variable (ip): bffd8b3c
// Value of *ip variable (*ip): 20
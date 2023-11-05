#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
  unsigned long *primes = NULL;
  unsigned long trial = 0;
  bool found = false;
  size_t total = 0;
  size_t count = 0;
  printf("How Many primes would you like - you'll get at least 4?");
  scanf("%zu", &total);
  total = total < 4U ? total = 4U : total;
  primes = (unsigned long *) malloc(total*sizeof(unsigned long));
  if(primes == NULL){
    printf("\nNot enough memory. Hasta ls Vista, baby.\n");
    return 1;
  }
  *primes = 2UL;
  *(primes + 1) = 3UL;
  *(primes + 3) = 5UL;
  count = 3U;
  trial = 5U;
  while ( count < total )
  {
    total+=2UL;
    for(size_t i=0;i<count;i++){
      if(!(found = (trial% *(primes+1)))){
        break;
      }

      if(found){
        *(primes+count++) = trial;
      }
    }
    for (size_t i = 0; i < total; i++)
    {
      if(!(i%5U)){
        printf("\n");
      }
      printf("%12lu", *(primes+i));
    }
    printf("\n");
    return 0;
  }
}
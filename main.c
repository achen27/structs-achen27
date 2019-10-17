#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers.h"

int main(){
  srand(time(NULL)); //random sequence

  printf("==================================\n");
  //testing function that returns an example of your struct when run
  struct food a = example();
  printf("Example: %s\t%.2f\n\n", a.name, a.price);

  printf("==================================\n");
  //testing function that returns an example of your struct when run
  struct food b = example();
  print_Food(&b);

  printf("==================================\n");
  //testing function that modifies values of your struct's type
  struct food c = example();
  printf("Before\n");
  print_Food(&c);
  change_Food(&c, "pancakes", 4.75);
  printf("After\n");
  print_Food(&c);

  return 0;
}

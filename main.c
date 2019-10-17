#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers.h"

int main(){
  //testing function that returns an example of your struct when run
  struct food a = example();
  printf("Example: %s\t%.2f\n\n", a.name, a.price);

  //testing function that returns an example of your struct when run
  print_Food(&a);

  //testing function that modifies values of your struct's type
  change_Food(&a, "pancakes", 4.75);
  print_Food(&a);

  return 0;
}

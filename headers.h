#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct food{
  char *name;
  float price;
};
struct food example();
void print_Food(struct food *f);
struct food change_Food(struct food *f, char *n, float p);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers.h"

struct food example(){
    struct food f1; //creates struct

    srand(time(NULL)); //random sequence

    int r = rand() % 4; //get random number
    if (r == 0){ //choosing name
      f1.name = "hamburger";
    } else if (r == 1){
      f1.name = "french fries";
    } else if (r == 2){
      f1.name = "chicken nuggets";
    } else{
      f1.name = "soda";
    }

    f1.price = rand() % 500 / 100.0 + 1; //choosing price

    return f1;
 }

 void print_Food(struct food *f){
   printf("You have selected:\nFood: %s\tPrice: %.2f\n\n", f->name, f->price);
 }

 struct food change_Food(struct food *f, char *n, float p){
   f->name = n;
   f->price = p;
   return *f;
 }

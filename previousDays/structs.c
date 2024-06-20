#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
  int mileage;
};

void set_price(struct car *c, float new_price){
  (*c).price = new_price;
}

void set_mileage(struct car *c, int current_mileage){
  c->mileage = current_mileage;
}
int main(void)
{
  struct car ractis = {.name = "Toyota Ractis", .speed = 180 }; //Variable "ractis" of type "struct car";

  set_price(&ractis, 740000.99);
  set_mileage(&ractis,60000);

  printf("Name: %s\n", ractis.name);
  printf("Price: %f Ksh\n", ractis.price);
  printf("Speed: %d km/h\n", ractis.speed);
  printf("Mileage: %d km\n", ractis.mileage);
}

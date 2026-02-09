#include <stdio.h>
typedef struct Car {
	char *model;
	char *barnd;
	int price;
	int mileage;
} car_t;

car_t c = {
	.model = "x",
	.barnd = "tesla",
	.price = 1000,
	.mileage = 20,
};

// so basically sruct stores data or represents it but does not have any behaviour

int main(void) {
	printf(" model: %s\n", c.model);
	return 0;
}

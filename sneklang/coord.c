#include "coord.h"


// returns a struct of type Coordinate ---> new_coord function accepts 3 parameters

/* 

struct Coordinate new_coord (int x, int y, int z) {
	struct Coordinate c = {
		.x = x,
		.y = y,
		.z = z,
	};
	return c;
}

*/

coord_t new_coord(int x, int y, int z) {
	coord_t c = { .x = x, .y = y, .z = z,};
	return c;
}

// using typedef replaces the need to fully write struct name identifier
// you can use sizeof with struct type

// funnc scale_coordinates returns a struct coordinates scaled using a scale value
struct Coordinate scale_coordinate(struct Coordinate c, int scale) {
	struct Coordinate scaled = {
		.x = c.x * scale,
		.y = c.y * scale,
		.z = c.z * scale,
	};
	return scaled;
}

int main(void) {
	struct Coordinate c = {0}; // assign all struct values to 0, zero initializer
	struct Coordinate c2 = {5,4,3}; // possitional initializer
	
	/* designated initializer */
	struct Coordinate c3 = {
		.x = 5,
		.y = 10,
		.z = 20
	};
}

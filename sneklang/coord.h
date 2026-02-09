#pragma once

typedef struct Coordinate {
	int x;
	int y;
	int z;
} coord_t;

struct Coordinate new_coord(int x, int y, int z);
struct Coordinate scale_coordinate(struct Coordinate c, int scale);

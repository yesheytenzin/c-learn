#include "exercise.h"

char *get_tempearture_status(int temp)
{
	if (temp < 70)
	{
		return "too cold";
	} 
	else if (temp > 90) 
	{
		return "too hot";
	}
	else
	{
		return "just right";
	}
}

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Argos";
	my_dog.age = 3;
	my_dog.owner = "Draco";
	printf("My name id %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}

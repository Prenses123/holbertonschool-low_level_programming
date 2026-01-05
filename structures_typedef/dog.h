#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog = struct 
 */
struct dog
{
	char* name;
	float age;
	char* owner;
};
int main(void)
{
	struct dog x;
	x.name = "Poppy";
	x.age = 3.5;
	x.owner = "Bob";
	printf("%s\n", x.name);
	printf("%f\n", x.age);
	printf("%s\n", x.name);
}

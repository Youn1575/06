#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void print_star() { // function definition
	int i;
	for(i=5; i<10; i++)
		printf("*");
}

int main(int argc, char *argv[]) {
	print_star();
	print_star();
	print_star();
	return 0;
}

#include "stdio.h"

int main(int argc, char *argv[])
{
	int a, b;
	FILE *in = fopen(argv[1], "r");
	fscanf(in, "%i\n%i\n", &a, &b);
	fclose(in);

	FILE *out = fopen(argv[2], "w");
	fprintf(out, "%i", a + b);
	fclose(out);
}
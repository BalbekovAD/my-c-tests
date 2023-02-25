#include "stdio.h"

int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	FILE *in = fopen(argv[1], "r");
	fscanf(in, "%d\n%d\n", &a, &b);
	fclose(in);

	FILE *out = fopen(argv[2], "w");
	fprintf(out, "%d\n", a + b);
	fclose(out);
}

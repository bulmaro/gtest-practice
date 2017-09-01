#include <stdio.h>
#include <stdlib.h>

#include "prime.h"

int main(int argc, char ** argv) {
	unsigned int n = atoi(argv[1]);
	printf("%d %s prime\n", n, isPrime(n)?"is":"IS NOT");
}

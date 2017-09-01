#include <stdio.h>
#include <stdlib.h>

#include "add.h"

int main(int argc, char ** argv) {
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	printf("%d+%d=%d\n", n1, n2, add(n1,n2));
}

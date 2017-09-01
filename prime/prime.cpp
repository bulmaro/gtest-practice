#include <math.h>

#include "prime.h"

bool isPrime(unsigned int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

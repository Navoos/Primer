#include "Primer.hpp"
#include <stdexcept>
#include <cmath>

bool Primer::is_prime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	
	int sqrtN = static_cast<int>(sqrt(n));

	for (int i = 3;i <= sqrtN;++i) {
		if (n % i == 0) return false;
	}
	return true;
}

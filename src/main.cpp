#include <iostream>
#include <vector>
#include "Primer.hpp"

using namespace std;

int main() {
	std::vector<int> vec = {2, 14, 3, 100, 56, 13};
	for (int &i: vec) {
		bool is_prime = Primer::is_prime(i);
		cout << i << " ";
		if (is_prime) cout << "is prime" << endl;
		else cout << "is not prime" << endl;
	}
}

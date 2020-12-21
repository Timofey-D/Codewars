#include <iostream>

int getPowerTwo(int power) {
	int res = 1;
	if (power == 1)
		return 2;
	for (int i = 0; i < power; i++)
		res *= 2;
	return res;
}


bool isPrime(int num) {
	int M = getPowerTwo(num) - 1;
	int S = 4;
	int K = 1;
	if (num == 2)
		return true;
	if (num < 2)
		return false;
	while (K != num - 1) {
		S = ((S * S) - 2) % M;
		K++;	
	}
	if (S == 0)
		return true;
	else
		return false;
}

int main() { 
	std::cout << "Test 1" << std::endl << 1 << std::endl << isPrime(1) << std::endl;
	std::cout << "Test 2" << std::endl << 3 << std::endl << isPrime(3) << std::endl;
        std::cout << "Test 3" << std::endl << 5 << std::endl << isPrime(5) << std::endl;
	std::cout << "Test 4" << std::endl << 6 << std::endl << isPrime(6) << std::endl;
	std::cout << "Test 5" << std::endl << 2 << std::endl << isPrime(2) << std::endl;
	std::cout << "Test 6" << std::endl << 4 << std::endl << isPrime(4) << std::endl;
	std::cout << "Test 7" << std::endl << -10 << std::endl << isPrime(-10) << std::endl;
}

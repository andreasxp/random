#include <iostream>
#include "zh/random.hpp"
using namespace std;

#define GEN(token) cout << "Generated " << #token << ": " << gen.get<token>() << std::endl
#define GEN2(token, min, max) cout << "Generated " << #token << ": " << gen.get<token>(min, max) << std::endl

int main() {
	zh::multigenerator gen;

	GEN(int);
	GEN(float);
	GEN(double);
	GEN(char);
	GEN(bool);

	for (double i = 0; i < 100; i++) {
		GEN2(double, 0, 1);
	}
}
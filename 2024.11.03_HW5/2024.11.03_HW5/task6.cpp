#include<iostream>
#include<set>
int main(int argc, char* argv[]) {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::set <int>(a);
	std::set <int>(b);
	int n, n1, z;
	std::cin >> n;
	std::cin >> n1;
	for (int i = 0; i < n; ++i) {
		std::cin >> z;
		a.insert(z);
	}

	for (int i = 0; i < n1; ++i) {
		std::cin >> z;
		b.insert(z);
	}
	for (auto c : a) {
		if (b.find(c) != b.end())
			printf("%d ", c);
	}

	return EXIT_SUCCESS;
}
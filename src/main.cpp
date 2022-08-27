#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	for (auto i = 1; i < n; ++i) {
		cout << ' ';
	}
	cout << "*\n";

	for (auto i = 1; i < n; ++i) {
		for (auto j = 1; j < n - i; ++j) {
			cout << ' ';
		}
		cout << '*';
		for (auto j = 0; j < 2 * i - 1; ++j) {
			cout << ' ';
		}
		cout << "*\n";
	}

	return 0;
}
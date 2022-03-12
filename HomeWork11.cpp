#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задача №11.1\nПростые числа от 2 до 1000:\n";
	for (int i = 2; i <= 1000; i++) {
		bool easy = true;
		for (int j = 2; j * j <= i; j++)
			if (i % j == 0) {
				easy = false;
				break;
			}
		if (easy) {
			cout << i << endl;
		}
	}
			
	
	cout << "Задача №11.2\n";
	int N = 7;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			if (i == j || i + j == N - 1 || i == N / 2 || j == N / 2)
				cout << " * ";
			else
				cout << "   ";
		cout << "\n\n";
	}

	return 0;
}
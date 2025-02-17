#include<iostream>
using namespace std;

#define N 5
#define M 10

int main() {

	int matrix[N][N]{};
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			int number = rand() % 101;

			cout << number << "  ";

			if (i == j) {
				sum += number;
			}


		}
		cout << endl;
	}
	cout  << sum << endl;

	return 0;
}


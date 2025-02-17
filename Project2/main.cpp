#include<iostream>
#include"logic.h"
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

		}



		cout << endl;

	}
	cout << sum_element_of_diagonale(matrix[N][N])  << endl;
}

	



#include<iostream>
using namespace std;

#define N 5


int sum_element_of_diagonale(int matrix[N][N]) {
	int sum = 0;
	

	for  (int i = 0; i < N; i++){

		sum += matrix[i][N - 1 - i];
		
	}
	return sum;
}
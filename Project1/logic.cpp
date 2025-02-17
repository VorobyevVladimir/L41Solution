#include<iostream>
using namespace std;

void create_vector(int* vector, int SIZE) {

	
	int mark;

	for (int i = 0; i < SIZE; i++) {
		cin >> mark;
		if (mark > 10 || mark < 1) {
			break;
		}
		else {
			mark = vector[i];
		}
	}
}



int average(int* vector, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum = sum + vector[i];
	}
	return sum / size;
}

int compare_group(int avg_one , int avg_two , int avg_three) {

	if (avg_one > avg_two && avg_one > avg_three) {
		return avg_one;
	}
	else if( avg_two > avg_three){
		return avg_two;
	}
	else {
		return avg_three;
	}
}
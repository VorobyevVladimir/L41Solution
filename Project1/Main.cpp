#include<iostream>
#include "logic.h"
using namespace std;

#define SIZE 5




int main() {

	int group_one[SIZE];
	int group_two[SIZE];
	int group_three[SIZE];
	
	int avg_one;
	int avg_two;
	int avg_three;

	cout << " enter marks " << endl;

	 create_vector(group_one, SIZE);

	 cout << " enter marks for group two" << endl;

	 create_vector(group_two, SIZE);

	 cout << " enter marks for group three" << endl;

	 create_vector(group_three, SIZE);

	 avg_one = average(group_one, SIZE);
	 avg_two = average(group_two, SIZE);
	 avg_three = average(group_three, SIZE);


	 cout << " avg for first = " << avg_one << endl;
	 cout << " avg for second = " << avg_two << endl;
	 cout << " avg for third = " << avg_three << endl;

	 cout << " the best avg mark = " <<  compare_group(avg_one, avg_two, avg_three) << endl;


	return 0;
	system("pause");
}
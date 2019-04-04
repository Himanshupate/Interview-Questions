#include<iostream>
#include<stdio.h>

using namespace std;

int main() {

	int a, b, i = 0, j = 0, k = 0, l = 0, f;

	cout << "Enter the matrix size.(eg. 2*2, 4*4)\n";
	scanf("%d*%d", &a, &b);
	int aa[a][b];
	cout << "Enter " << a * b << "matrix elements:  ";
	for (int ii = 0; ii < a; ii++) {
		for (int jj = 0; jj < b; jj++) {
			scanf("%d", &aa[ii][jj]);
		}
	}

	int var = a * b;
	int row = 0, column = 0;
	j = b - 1;
	k = j;
	l = a - 1;
	while (var > 0) {
		for (i = column; i <= j; i++) {
			if (var <= 0)
			{
				break;
			}

			cout << aa[row][i] << " ";
			--var;


		}

		for (i = row + 1; i <= l; i++) {
			if (var <= 0)
			{
				break;
			}

			cout << aa[i][k] << " ";
			--var;

		}

		for (i = k - 1; i >= column; i--) {
			if (var <= 0)
			{
				break;
			}

			cout << aa[l][i] << " ";
			--var;


		}
		for (i = l - 1; i > row; i--) {

			if (var <= 0)
			{
				break;
			}

			cout << aa[i][column] << " ";
			--var;


		}

		
		j--;
		k--;
		row++;
		column++;
		l--;
	}
}


// Test 1
// Inputs
//      4*4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//Output: 
//      1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

// Test 2
// Inputs
//  3*6  1   2   3   4  5   6  7   8   9  10  11  12    13  14  15 16  17  18
//Output: 
//      1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
//      1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11 

#include <iostream>
#include <vector>
#include <random>
using namespace std;
int n, r, c;
int ans;

void Z(int y, int x, int size)
{
	for (int i = 0; i < size; i++) {
		Z(y, x, size / 2);
		Z(y, x + size / 2, size / 2);
		Z(y + size / 2, x, size / 2);
		Z(y + size / 2, x + size / 2, size / 2);
	}
}

int main() {

	cout << "2Â÷¿ø º¤ÅÍ Ãâ·Â" << endl;

	random_device rd;
	mt19937_64 generator(rd());
	uniform_int_distribution<int> range(0,5);

	vector<vector<int>>vec;
	for (int i = 0; i < 4; ++i)
	{
		vector<int> row;
		for (int j = 0; j < 4; ++j) {
			row.push_back(range(generator));
		}
		vec.push_back(row);
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << "2Â÷¿ø º¤ÅÍ Z ¹æÇâ Å½»ö °úÁ¤" << endl;
	Z(2, 2, 4);
}
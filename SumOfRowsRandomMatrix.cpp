#include <iostream>
#include <random>
using namespace std;

int random(int min, int max)
{
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

int main()
{
	const int RowCount = 5;
	const int ColumnCount = 5;

	int Matrix[RowCount][ColumnCount] = {};

    int rowSum = 0;

	for (int rowNum = 1; rowNum < RowCount; rowNum++)
	{
		for (int columnNum = 1; columnNum < ColumnCount; columnNum++)
		{
			Matrix[rowNum][columnNum] = random(1, 9);
            rowSum += Matrix[rowNum][columnNum];
			cout << Matrix[rowNum][columnNum] << ' ';
		}
        cout << "| Row Sum: " << rowSum;
		cout << endl;
        rowSum = 0;
	}	
    
}
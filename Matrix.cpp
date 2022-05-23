#include <iostream>
using namespace std;

int main()
{
	const int RowCount = 11;
	const int ColumnCount = 11;

	int Matrix[RowCount][ColumnCount] = {};

	for (int rowNum = 1; rowNum < RowCount; rowNum++)
	{
		for (int columnNum = 1; columnNum < ColumnCount; columnNum++)
		{
			Matrix[rowNum][columnNum] = rowNum * columnNum;
			cout << Matrix[rowNum][columnNum] << " ";
		}
		cout << endl;
	}	
}
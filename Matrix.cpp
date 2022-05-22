#include <iostream>
using namespace std;

int main()
{
	const int RowCount = 15;
	const int ColumnCount = 15;

	int Matrix[RowCount][ColumnCount] = {};

	for (int rowNum = 0; rowNum < RowCount; rowNum++)
	{
		for (int columnNum = 0; columnNum < ColumnCount; columnNum++)
		{
			Matrix[rowNum][columnNum] = rowNum + columnNum;
			cout << Matrix[rowNum][columnNum] << "  ";
		}
		cout << endl;
	}	
}
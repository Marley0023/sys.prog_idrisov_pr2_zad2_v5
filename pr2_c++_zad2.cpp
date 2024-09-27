using namespace std;

#include <iostream>

int main()
{
    setlocale(0, "rus");
    const int row = 4;
	const int col = 6;
    int M[row][col];
    cout << "Двумерный массив заполненный случайными числами: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
			M[i][j] = rand() % 20;
			cout << M[i][j] << " ";
		}
		cout << endl;
    }
    int sum;
    for (int i = 0; i < row; i++) 
    {
        sum = 0;
        for (int j = 0; j < col; j++) 
        {
            sum += M[i][j];
        }
        cout << "Сумма строки " << i << ": " << sum << endl;
    }
}


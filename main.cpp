#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{

    int r=0;
    int c=0;


    cout << "Rows: ";
    cin >> r;
    cout << "Columns: ";
    cin >> c;

    if (r==0 || c==0){
        cout << "!!!r>0 c>0!!!";
    }

    srand(time(0));
    int **Array = new int*[r];


    for (int count = 0; count < r; count++)
        Array[count] = new int[c];

    for (int count_row = 0; count_row < r; count_row++)
        for (int count_column = 0; count_column < c; count_column++)
            Array[count_row][count_column] = (rand() % 100);


    for (int count_row = 0; count_row < r; count_row++)
    {
        for (int count_column = 0; count_column < c; count_column++)
            cout << setw(4) << setprecision(2) << Array[count_row][count_column] << " ";
        cout << endl;
    }

    for (int count_row = 0; count_row < r; count_row++)
    {
        int sum = 0;
        for (int count_column = 0; count_column< c; count_column++)
        {
            sum += Array[count_row][count_column];
        }
        cout << "Summary of elements of row["<<count_row+1<<"] = " << sum << endl;
    }

    for (int count_column = 0; count_column < c; count_column++)
    {
        int sum = 0;
        for (int count_row = 0; count_row < r; count_row++)
        {
            sum += Array[count_row][count_column];
        }
        cout << "Summary of elements of column["<<count_column+1<<"] = " << sum << endl;
    }

    for (int count = 0; count < r; count++)
        delete[]Array[count];
    return 0;
}

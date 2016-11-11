#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int n;
    int m;
    cin >> n;
    cin >> m;
    double **b = new double*[n];
    for (int count = 0; count < m; count++)
        b[count] = new double[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = rand()%25+10;
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

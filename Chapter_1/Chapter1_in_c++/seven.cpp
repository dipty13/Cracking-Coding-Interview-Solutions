/*  1.7
*   Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0.
*/
#include<bits/stdc++.h>
using namespace std;
int matrix[1000][1000];
void solve(int m, int n)
{
    int i, j, row[m + 5], col[n + 5];
    memset(row, 0 , sizeof(row));
    memset(col, 0 , sizeof(col));
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n ; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int  m,n ,i , j;

    cin>> m>> n;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n ; j++)
        {
            cin>> matrix[i][j];
        }
    }
    solve(m, n);
    return 0;
}

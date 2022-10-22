#include <stdio.h>
int main()
{
    int n, m, p = 1;
    scanf("%d", &m);
    scanf("%d", &n);
    long long int arr[m][n];
    long long int arr1[n][p];
    long long int arr2[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%lld", &arr1[i][j]);
        }
    }
    long long int sum = 0;
    for (int a = 0; a < p; a++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum = sum + arr[i][j] * arr1[j][a];
            }
            arr2[i][a] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%4lld ", arr2[i][j]);
        }
        printf("\n");
    }
  return 0;
}

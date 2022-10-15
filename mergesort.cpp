// Merge Sort
// this program generates a random array and sorts it using merge sort
// it also shows the ratio of (actual number of comparision) / (expected number of comparision)
#include <bits/stdc++.h>
using namespace std;
int c1 = 0, c2 = 0;
void generate(int *a, int size, int range)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = (rand() % range);
    }
}

void merge(int a[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = a[p + i];
        // c1++;
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = a[q + 1 + j];
        // c1++;
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            a[k] = L[i];
            i++;
            c1++;
        }
        else
        {
            a[k] = M[j];
            j++;
            c1++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int q = l + (r - l) / 2;
        mergeSort(a, l, q);
        mergeSort(a, q + 1, r);
        merge(a, l, q, r);
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {6, 5, 12, 10, 9, 1};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int size, range;
    cout << "Enter size and range of array: \n";
    cin >> size >> range;

    generate(a, size, range);
    cout << "Before Sorting: \n";
    printArray(a, size);

    mergeSort(a, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(a, size);

    c2 = size * log(size);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1/c2: " << (c1 * 1.0) / c2 << endl;
    return 0;
}

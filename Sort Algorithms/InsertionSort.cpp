#include <stdio.h>
#include <stdlib.h>

using namespace std;

void InsertionSort(int v[], int N)
{
    int indiceMinimo = 0;
    for(int i = 1; i < N; i++)
        if(v[i] < v[indiceMinimo])
            indiceMinimo = i;
    swap(v[0], v[indiceMinimo]);

    for(int i = 1; i < N; i++)
    {
        int j = i;
        while(v[j] < v[j-1])
        {
            swap(v[j], v[j-1]);
            j--;
        }
    }
}
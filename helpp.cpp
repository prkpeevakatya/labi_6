#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

bool first_digit_one(int a)
{
    int last = a;
    while (last > 10 )
        last /= 10;
    if (last == 1) return true;
    return false;
}

int* create_and_fill_array(int maxi)
{
    int* A = new int[maxi];

    for (int i = 0; i < maxi; i++)
        cin >> A[i];

    return A;
}

void sort_mass(int* A, int maxi)
{
    for (int i = 0; i < maxi; i++)
        for (int j = i + 1; j < maxi; j++)
        {
            if (A[i] > A[j])
                swap(A[i], A[j]);
        }
}


int summ_of_digit(int a)  
{
    int summa = 0;
    int h = a;
    while (h != 0)
    {
        summa += (h % 10);
        h /= 10;
    }
    return summa;
}


int first_digit(int a)  
{
    int let = a;
    while (let > 10)
        let /= 10;
    return let;
}

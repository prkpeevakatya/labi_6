#include <iostream>
#include <cmath>
#include <locale.h>
#include "helpp.hpp"
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

    int main() {
        setlocale(LC_ALL, "Russian");
        int k = 0;
        const int maxi = 1000;
        int* A = create_and_fill_array(maxi);
        //for (int i = 0; i < maxi; i++) cout << A[i] << " ";
        cout << endl;
        for (int i = 0; i < maxi; i++)  if (first_digit_one(A[i])) k += 1;

        if (k > 0) sort_mass(A, maxi);

        //for (int i = 0; i < maxi; i++) cout << A[i] << " ";
        return 0;
    }

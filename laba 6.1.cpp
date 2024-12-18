#include <iostream>
#include <cmath>
#include <locale.h>
#include "helpp.hpp"
using namespace std;



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

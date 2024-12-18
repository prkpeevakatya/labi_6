#include "helpp.hpp"
#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() {
        setlocale(LC_ALL, "Russian");

        const int size = 5;
        int* arr = new int[size];
        for (int i = 0; i < size; i++) cin >> arr[i];
        //for (int i = 0; i < size; i++) cout << arr[i] << " ";


        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if (first_digit(arr[i]) > first_digit(arr[j])) swap(arr[i], arr[j]);
                else if (first_digit(arr[i]) == first_digit(arr[j]))
                {
                    if (summ_of_digit(arr[i]) > summ_of_digit(arr[j])) swap(arr[i], arr[j]);
                    else if (summ_of_digit(arr[i]) == summ_of_digit(arr[j]))
                    {
                        if ( arr[i] > arr[j]) swap(arr[i], arr[j]);
                    }
                }
            }

        }
        //for (int i = 0; i < size; i++) cout << arr[i] << " ";
        return 0;
    }

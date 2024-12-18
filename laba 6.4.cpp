#include <iostream>
#include <cmath>
#include <locale.h>
#include "helpp.hpp"
using namespace std;

int main()
    {
        setlocale(LC_ALL, "Russian");
        int n;
        cin >> n;

        int* u = new int[n];
        for (int i = 0; i < n; i++)  cin >> u[i];

        /*cout << endl << endl;
        for (int i = 0; i < n; i++) cout << u[i] << " ";*/

        for (int i = 0; i < n; )
        {
            if (contains_7_not_6(u[i]))
            {
                for (int j = i; j < n - 1; j++)
                {
                    u[j] = u[j + 1];
                }
                n--;
            }
            else
            {
                i++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (is_prime(u[i]))
            {
                for (int j = n; j > i; j--)
                {
                    u[j] = u[j - 1];
                }
                u[i + 1] = u[i];
                n++;
                i++;
            }
        }


        /*cout << endl << endl;
        for (int i = 0; i < n; i++) cout << u[i] << " "; 
        */
        return 0;
    }

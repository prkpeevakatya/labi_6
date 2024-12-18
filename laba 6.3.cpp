#include <iostream>
#include <cmath>
#include <locale.h>
#include "helpp.hpp"
using namespace std;

int main() {
        setlocale(LC_ALL, "Russian");

        int size2 = 5;
        int mini_string = INT_MAX;
        int that;
        int** Q = create_and_fill_array3(size2);

        /*cout << endl << endl;
        for (int i = 0; i < size2; i++)  
        {
            for (int j = 0; j < size2; j++)
            {
                cout << Q[i][j] << "\t";
            }
            cout << endl;
        }
        */

        for (int y = 0; y < size2; y++)
        {
            if (summ_string(Q, size2, y) < mini_string)
            {
                mini_string = summ_string(Q, size2, y);
                that = y;
            }
        }

        for (int i = 0; i < size2; i++) Q[that][i] = 0;


        /*cout << endl << endl;
        for (int i = 0; i < size2; i++)    
        {
            for (int j = 0; j < size2; j++)
            {
                cout << Q[i][j] << "\t";
            }
            cout << endl;
        }
        */
        return 0;
    }

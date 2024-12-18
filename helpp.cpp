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


int** create_and_fill_array3(int n)    
{
    int** Q = new int* [n];
    for (int i = 0; i < n; i++)
        Q[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Q[i][j];

    return Q;
}

int summ_string(int** Q, int n, int w) 
{
    int ssumm = 0;
    for (int i = 0; i < n; i++)
    {
        ssumm += Q[w][i];
    }
    return ssumm;
}

bool contains_7_not_6(int x)
    {
        int xx = x;
        int o1 = 0;
        int o2 = 1;
        while (x > 0) 
        {
            if (x % 10 == 7) o1 = 1;
            x /= 10;
        }
        while (xx > 0)
        {
            if (xx % 10 == 6) o2 = 0;
            xx /= 10;
        }
        if (o1 + o2 == 2) return true;
        return false;
    }


bool is_prime(int x)
    {
        if (x == 1) return false;
        int r = sqrt(x);
        for (int d = 2; d <= r; d++)
            if (x % d == 0) return false;

        return true;
    }

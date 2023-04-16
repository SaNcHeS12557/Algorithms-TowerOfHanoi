// TowerOfHanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Hanoi(int n, int start_rod[], int free_rod[], int end_rod[])
{
    if (n != 0) {
        Hanoi(n - 1, start_rod, end_rod, free_rod);
        end_rod[n - 1] = start_rod[n - 1];
        start_rod[n - 1] = 0;
        Hanoi(n - 1, free_rod, start_rod, end_rod);
    }
}
 
int main()
{
    const unsigned int n = 8; // number of discs
    int A[n], B[n], C[n]; // towers

    for (int i = 0; i < n; i++)
    {
        A[i] = n - i;
    }

    Hanoi(n, A, B, C); // calling the function

    for (int i = 0; i < n; i++)
    {
        cout << C[i] << " "; // cout'ing C tower
    }
}
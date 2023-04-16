// TowerOfHanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Hanoi(int n, int start_rod[], int free_rod[], int end_rod[]) {

};

int main()
{
    const int n = 5; // number of discs
    int A[n] = { 5, 4, 3, 2, 1 }, B[n], C[n]; // towers
    Hanoi(n, A, B, C); // calling the function
    for (int i = 0; i < n; i++)
    {
        cout << C[i] << " "; // cout'ing C tower
    }
}
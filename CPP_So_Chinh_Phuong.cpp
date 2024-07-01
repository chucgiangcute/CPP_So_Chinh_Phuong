// CPP_So_Chinh_Phuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
bool checkCP(int so)
{
    if ((int)sqrt(so) == sqrt(so))
    {
        return true;
    }
    return false;
}
int main()
{
    int so;
    cout << "Nhap so di :" << " ";
    cin >> so;
    for (int i = 1;i <= so;i++)
    {
        if (checkCP(i)) cout << i << " ";
    }
 }

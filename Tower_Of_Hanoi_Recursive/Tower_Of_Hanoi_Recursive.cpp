// Tower_Of_Hanoi_Recursive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void TOH(int disks, int towerA, int towerB, int towerC)
{
    if (disks > 0)
    {
        TOH(disks - 1, towerA, towerC, towerB);
        printf("Move %d to %d\n", towerA, towerC);
        TOH(disks - 1, towerB, towerA, towerC);
    }
}

int main()
{
    int disks = 3;
    int towerA = 1, towerB = 2, towerC = 3;

    TOH(disks, towerA, towerB, towerC);
    
}


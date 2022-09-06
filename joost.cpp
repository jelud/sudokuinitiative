#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int arrQ = 9;
    int arr[arrQ];
    int *ptr = arr;
    void rekurso(int *, int);
    srand(time(NULL));

    int newDigit = (rand() % 9) + 1;
    arr[0] = newDigit;

    for (int i = 1; i < arrQ; i++)
    {

        int newDigit = (rand() % 9) + 1;

        for (int j = 0; j <= 9; j++)
        {

            if (newDigit != arr[j])
            {

                if (arr[j] == arr[i - 1])
                {
                    arr[i] = newDigit;
                    break;
                }
            }
            else
            {
                i--;
                break;
                
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << endl
             << arr[i] << ",";
    }
}

void rekurso(int *pointer, int ii)
{
}
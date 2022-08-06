#include <iostream>
#include <cstdlib>

using namespace std;

void input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}

int maxWater(int *height, int n)
{
    int i, j, area = 0;
    int temp = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {

            if (*(height + j) > *(height + i))
            {
                temp = (*(height + i)) * (abs(j - i));
                if (temp > area)
                    area = temp;
            }
            else
            {
                temp = (*(height + j)) * (abs(j - i));
                if (temp > area)
                    area = temp;
            }
            temp = 0;
        }
    }
    return area;
}

int main()
{
    int n;
    cout << "Enter number of heights\t";
    cin >> n;
    int *height = (int *)malloc(sizeof(int) * n);

    input(height, n);

    cout << "The Max Area of water is"
         << "\t" << maxWater(height, n);

    return 0;
}
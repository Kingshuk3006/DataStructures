#include <iostream>

using namespace std;

void input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}

int *sortArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp;
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    return arr;
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout<<""<<endl;
}

int removeExtra(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                count++;
                //   int temp = *(arr + j);
                for (int k = j; k < size - 1; k++)
                {
                    *(arr + k) = *(arr + k + 1);
                }
                size--;
            }
        }
    }
    cout<<"Showing refined Array Size"<<endl;
    displayArray(arr, size);
    return count;
}

int main()
{
    int size;
    cout << "Enter the Size of the array";
    cin >> size;

    int *num = (int *)malloc(sizeof(int) * size);

    input(num, size);

    sortArray(num, size);

    displayArray(num, size);

    cout<<"Showing refined Array Size"<<removeExtra(num, size);

    return 0;
}
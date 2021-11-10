#include <iostream>
#include <vector>

using namespace std;


void quickSort1(int array[][2], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2][0];
    int temp2, temp3;

    while (i <= j)
    {
        while (array[i][0] < pivot)
            i++;
        while (array[j][0] > pivot)
            j--;
        if (i <= j)
        {

            temp2 = array[i][0];
            temp3 = array[i][1];
            array[i][0] = array[j][0];
            array[i][1] = array[j][1];
            array[j][0] = temp2;
            array[j][1] = temp3;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort1(array, low, j);
    if (i < high)
        quickSort1(array, i, high);
}
void quickSort2(int array[][2], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2][1];
    int temp2, temp3;

    while (i <= j)
    {
        while (array[i][1] < pivot)
            i++;
        while (array[j][1] > pivot)
            j--;
        if (i <= j)
        {

            temp2 = array[i][0];
            temp3 = array[i][1];
            array[i][0] = array[j][0];
            array[i][1] = array[j][1];
            array[j][0] = temp2;
            array[j][1] = temp3;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort2(array, low, j);
    if (i < high)
        quickSort2(array, i, high);
}
int main()
{
    int machine_num;
    int num;
    int array[10000000][2];

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
    }

    quickSort1(array, 0, num - 1);


    machine_num = 1;

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            quickSort2(array, 0, i - 1);

            if (array[j][1] <= array[i][0])
            {
                array[j][1] = array[i][1];
                break;
            }
            else
            {
                machine_num++;
                break;
            }
        }
    }

    cout << machine_num;

    return 0;
}

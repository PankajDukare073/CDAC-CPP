/*1:Write a program to create an array of integers and perform following operations on that array like
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the
array from user. */
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "how many element you want to add in array:";
    cin >> size;
    int arr[size];

    // store element of array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element:";
        cin >> arr[i];
    }

    // traverse the array
    cout << "Array element are:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // sort the array
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // traverse the array
    cout << "\nafter sort Array element are:";
    int amin, amax, asum = 0, avg = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        asum += arr[i];
    }
    avg = asum / size;
    amin = arr[0];
    amax = arr[size - 1];
    cout << "\n\nSum of the elements: " << asum << endl;
    cout << "Average of the elements: " << avg << endl;
    cout << "Maximum number in the array: " << amax << endl;
    cout << "Minimum number in the array: " << amin << endl;
    return 0;
}
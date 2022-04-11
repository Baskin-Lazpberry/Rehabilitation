#include<iostream>

#define swap(type, a, b) do{type temp = a; a = b; b = temp; } while(0)

using namespace std;

void bubbleSort(int* arr, int n)
{
    int last = n - 1;
    int count, k;
    for (int i = 0; i < n - 1; i++)
    {
        count = 0;
        k = last;
        for(int j = 0; j < k; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(int, arr[j], arr[j+1]);
                count++;
                last = j;
            }
        }

        if(count == 0) break;

        //cout to see the process
        for(int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

}

int main()
{
    int* arr;
    int n;

    cout << "Input length: ";
    cin >> n;

    arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Input num: ";
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << "Num[" << i << "]: " << arr[i] << endl;
    }

    delete[] arr;
    
    return 0;
}
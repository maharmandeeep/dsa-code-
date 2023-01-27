#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int d, p;

    cout << "ehter the position" << endl;
    cin >> p;

    cout << "enter which side you want to hsift 1=right and 0=left" << endl;

    cin >> d;

    if (d)
    {
        for (int i = 0; i < p; i++)
        {
            int temp = arr[5 - 1];
            for (int j = 5-1; j >=1; j--)
            {
                arr[j] = arr[j -1];
            }
            arr[0] = temp;
        }
    }
    else
    {
        for (int i = 0; i < p; i++)
        {
            int temp = arr[0];
            for (int j = 0; j < 5 - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[5 - 1] = temp;
        }
    }


    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
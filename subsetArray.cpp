#include <iostream>
using namespace std;
#define SIZE 10000

int subset(int input[20], int length, int output[SIZE][20])
{
    if (length == 0)
    {
        output[0][0] = 0;
        return 1;
    }

    // send arr+1 to recursion
    int size = subset(input + 1, length - 1, output);

    // add current element to beginning of each entry and duplicate
    for (int i = 0; i < size; ++i)
    {
        // add entry to i+size
        //output[i+size][0] = 1;
        output[i + size][1] = input[0];
        for (int j = 1; j <= output[i][0]; ++j)
        {
            output[i + size][j + 1] = output[i][j];
        }
        output[i + size][0] = output[i][0] + 1;
    }

    return size * 2;
}

int main()
{
    int input[20], length, output[SIZE][20];
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    int size = subset(input, length, output);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}

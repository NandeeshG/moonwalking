// given an array and k
// return all subsets summing to k
//naman ediiii
#include <iostream>
#include <math.h>
#define debug(a) cout << #a << '=' << a << endl
using namespace std;

int subsetSum(int size, int *arr, int k, int **output, int sets, int *temp)
{
    //base case
    if (size == 0)
    {
        //calc sum of temp
        int sum = 0;
        for (int i = 1; i <= temp[0]; ++i)
        {
            sum += temp[i];
        }

        // check given condition
        if (sum == k)
        {
            //add temp to output
            output[sets][0] = temp[0];
            for (int i = 1; i <= temp[0]; ++i)
            {
                output[sets][i] = temp[i];
            }
            return sets + 1;
        }
        else
        {
            return sets;
        }
    }

    //don't put current element to temp
    int ans1 = subsetSum(size - 1, arr + 1, k, output, sets, temp);

    //put current elem to temp
    //temp[++temp[0]] = arr[0];
    temp[temp[0] + 1] = arr[0];
    ++temp[0];
    int ans2 = subsetSum(size - 1, arr + 1, k, output, ans1, temp);

    return ans1 + ans2;
}

int subsetSum(int size, int *arr, int k, int **output)
{
    int *temp = new int[size + 1];
    temp[0] = 0;
    return subsetSum(size, arr, k, output, /*sets = */ 0, temp);
}

int main()
{
    int size, k;
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cin >> k;

    int **output;
    int pow2 = pow(2, size);
    output = new int *[pow2];
    for (int i = 0; i < pow2; ++i)
    {
        output[i] = new int[size + 1];
    }

    int ans = subsetSum(size, arr, k, output);
    debug(ans);

    cout << "\nSolution sets-\n";
    for (int i = 0; i < ans; ++i)
    {
        for (int j = 1; j <= output[i][0]; ++j)
        {
            cout << output[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "These all sum to k.\n";

    delete[] arr;
    for (int i = 0; i < pow2; ++i)
    {
        delete[] output[i];
    }
    delete[] output;

    return 0;
}

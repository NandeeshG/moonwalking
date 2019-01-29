#include <iostream>
#define debug(a) cout << #a << ':' << a << endl
using namespace std;

/*
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. 
You are given a numeric string S. Write a program to 
return the list of all possible codes that can be 
generated from the given string.
Note : The order of codes are not important. 
And input string does not contain 0s.

input:
1123

output:
aabc
kbc
alc
aaw
kw

*/

int getCodes(string input, string output[10000])
{

    /*
    for 1123
    1 1 2 3
    11 2 3
    1 12 3
    1 1 23
    11 23
    */

    if (input.length() == 0)
    {
        return 1;
    }

    //pass one less. then add last char equivalent to all outputs.

    int last_digit = input[input.length() - 1] - 48; // -48 to convert ascii to int
    //debug(last_digit);
    char to_add = 'a' + last_digit - 1;
    int entries = getCodes(input.substr(0, input.length() - 1), output);
    for (int i = 0; i < entries; ++i)
    {
        output[i].push_back(to_add);
        //debug(output[i]);
    }

    //pass two less. then add last two char equivalent to all outputs.
    if (input.length() < 2)
        return entries;
    int last_num = ((input[input.length() - 2] - 48) * 10) + (input[input.length() - 1] - 48);
    if (last_num > 26)
        return entries;
    int entries2 = getCodes(input.substr(0, input.length() - 2), output + entries);
    to_add = 'a' + last_num - 1;
    for (int i = 0; i < entries2; ++i)
    {
        output[i + entries].push_back(to_add);
    }

    return entries + entries2;
}

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for (int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
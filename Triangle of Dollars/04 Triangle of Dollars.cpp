#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "
#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = EMPTY;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            output.append("$");

            if (col < row)
            {
                output.append(SPACE);
            }
        }

        output.append(NEW_LINE);
    }

    cout << output;
}


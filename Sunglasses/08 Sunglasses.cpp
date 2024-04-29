#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"
#define ASTERISK '*'
#define SPACE ' '
#define VERTICAL_LINE '|'
#define SOLIDUS '/'

string setString(int, int, char);

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    output.append(setString(1, 2 * n, ASTERISK))
        .append(setString(1, n, SPACE))
        .append(setString(1, 2 * n, ASTERISK))
        .append(NEW_LINE);

    for (int i = 1; i <= n - 2; i++)
    {
        output.append(setString(1, 1, ASTERISK))
            .append(setString(1, 2 * n - 2, SOLIDUS))
            .append(setString(1, 1, ASTERISK));

        if (i == ((n - 1) / 2))
        {
            output.append(setString(1, n, VERTICAL_LINE));
        }
        else
        {
            output.append(setString(1, n, SPACE));
        }

        output.append(setString(1, 1, ASTERISK))
            .append(setString(1, 2 * n - 2, SOLIDUS))
            .append(setString(1, 1, ASTERISK))
            .append(NEW_LINE);
    }

    output.append(setString(1, 2 * n, ASTERISK))
        .append(setString(1, n, SPACE))
        .append(setString(1, 2 * n, ASTERISK));

    cout << output << endl;

    return 0;
}

string setString(int start, int end, char simbol)
{
    string result = string();

    for (int i = start; i <= end; i++)
    {
        result.append(1, simbol);
    }

    return result;
}



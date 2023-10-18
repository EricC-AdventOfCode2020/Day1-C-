#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream input;
    input.open("./input");

    vector<string> data;
    string line;

    if (input.is_open())
    {
        while (getline(input, line))
        {
            data.push_back(line);
        }
    }
    input.close();

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }

    return 0;
}
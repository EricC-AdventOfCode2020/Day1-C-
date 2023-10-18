#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    ifstream input;
    input.open("./input");

    vector<int> data;
    stringstream ss;
    string line;

    if (input.is_open())
    {
        while (getline(input, line))
        {
            ss << line;
            int n;
            ss >> n;
            ss.clear();
            data.push_back(n);
        }
    }
    input.close();
    
    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data.size(); j++)
        {
            if (data[i] + data[j] == 2020)
            {
                cout << data[i] * data[j] << endl;
                return 0;
            }
        }
    }

    return -1;
}
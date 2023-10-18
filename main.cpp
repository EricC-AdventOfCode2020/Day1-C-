#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int part_1(vector<int> *data)
{
    for (int i = 0; i < data->size(); i++)
    {
        for (int j = 0; j < data->size(); j++)
        {
            if (data->at(i) + data->at(j) == 2020)
            {
                return data->at(i) * data->at(j);
            }
        }
    }
    
    return -1;
}

int part_2(vector<int> *data)
{
    for (int i = 0; i < data->size(); i++)
    {
        for (int j = 0; j < data->size(); j++)
        {
            for (int k = 0; k < data->size(); k++)
            {
                if (data->at(i) + data->at(j) + data->at(k) == 2020)
                {
                    return data->at(i) * data->at(j) * data->at(k);
                }
            }
        }
    }
    
    return -1;
}

int main()
{
    ifstream input;
    input.open("./input");

    vector<int> data;
    string line;

    if (input.is_open())
    {
        while (getline(input, line))
        {
            data.push_back(stoi(line));
        }
    }
    input.close();

    cout << "Part 1: " << part_1(&data) << endl;
    cout << "Part 2: " <<  part_2(&data) << endl;


    return 0;
}
//
// Created by OSAMA ASHRAF on 4/3/2024.
//

#ifndef RA7AL_PUBLICFUNCTIONS_H
#define RA7AL_PUBLICFUNCTIONS_H

#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(string &str, char delimiter = ' ')
{
    vector<string> result;
    string temp;
    for (char i : str)
    {
        if (i == delimiter)
        {
            result.push_back(temp);
            temp = "";
        }
        else
        {
            temp += i;
        }
    }
    result.push_back(temp);
    return result;
}

string join(vector<string> &values, const string &delimiter)
{
    ostringstream oss;
    for (int i = 0; i < values.size(); i++)
        oss << values[i] << (i + 1 != values.size() ? delimiter : "");

    return oss.str();
}

#endif // RA7AL_PUBLICFUNCTIONS_H

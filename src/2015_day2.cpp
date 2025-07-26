#include <string>
#include <vector>
#include <fstream>

#include <iostream>

int main()
{
    // Need to get input
    std::ifstream input_text;
    input_text.open("input.txt", std::ios::in);
    
    std::string input;
    std::vector<std::string> in_vec;
    if (input_text.is_open())
    {
        while (getline(input_text, input))
        {
            // Put into vector
            in_vec.push_back(input);
        }
        input_text.close();
    }

    /*
        Starting part 1 
    */

    std::string tmp_str;
    for (auto v : in_vec)
    {
        tmp_str = v;
    }

    return 0;
}
#include <iostream>
#include <fstream>

int main()
{
    // Need to get input
    std::ifstream input_text;
    input_text.open("input.txt", std::ios::in);
    
    std::string input;
    if (input_text.is_open())
    {
        while ( getline(input_text, input));
        input_text.close();
    }

    int pos = 0;

    for (auto c : input)
    {
        if (c == '(')
        {
            pos += 1;
        }
        else
        {
            pos -= 1;
        }
    }

    std::cout << "Position: " << pos << std::endl;

    return 0;
}
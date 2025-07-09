#include <string>
#include <vector>
#include <fstream>

int main()
{
    // Need to get input
    std::ifstream input_text;
    input_text.open("input.txt", std::ios::in);
    
    std::string input;
    if (input_text.is_open())
    {
        while (getline(input_text, input))
        {
            // Put into vector`
        }
        input_text.close();
    }

    return 0;
}
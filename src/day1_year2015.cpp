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

// int main()
// {
//     // Need to get input
//     std::ifstream input_text;
//     input_text.open("input.txt", std::ios::in);
    
//     std::string input;
//     if (input_text.is_open())
//     {
//         while ( getline(input_text, input));
//         input_text.close();
//     }

//     int pos = 0;
//     int count = 1;

//     for (auto c : input)
//     {
//         if (c == '(')
//         {
//             pos += 1;
//         }
//         else
//         {
//             pos -= 1;
//         }
//         if (pos == -1)
//         {
//             break;
//         }
//         count += 1;
//     }

//     std::cout << "Position of santa: " << pos << std::endl;
//     std::cout << "Position of step: " << count << std::endl;

//     return 0;
// }

// # Add main1_1.cpp after main in order to have it as a pre-requisite
// p1: main1_1.cpp
// 	g++ main1_1.cpp -o day1_2015_pt1

// p2: main1_2.cpp
// 	g++ main1_2.cpp -o day1_2015_pt2

// clean:
// 	rm day1_2015_pt1 day1_2015_pt2

// December 1st 2015

// The goal of the first day is to start off simple. Barebone C++ file with makefile.

// Environment = MacOS

// Example for day1 Compile part 1-> $ make p1 Clean -> $ make clean Run -> $ ./day1_2015_pt1

#include <iostream>
#include <string>
#include <cstdint>

int main()
{
    bool b_Guessed = false;
    int32_t uint_number;
    std::string input;
    
    while (!b_Guessed)
    {
        std::cout << "Guess a number from 1 to 100." << std::endl;
        
        std::getline(std::cin, input);
        
        uint_number = std::stoi(input);
        
        std::cout << "You chose number " << uint_number << "!" << std::endl;
        
        if (uint_number == 10)
        {
            std::cout << "Congratulations, the number was 10!" << std::endl;
            b_Guessed = true;
        }
        else if(uint_number < 1 || uint_number > 100)
        {
            std::cout << "Chose a number inside the valid range 1->100!" << std::endl;
        }
        else
        {
            std::cout << "Sorry, try again!" << std::endl;
        }
    }
    
    return 0;
}

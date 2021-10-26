#include <iostream>

int main()
{
    std::string user_input {};
 
    std::cout << "Please enter a sentence." << std::endl;
    
    std::cin >> user_input; // ABC
  
    std::cout << "-----------------------------" << std::endl;
    
    int line=0;
    
    //If size of sentence is 3, number of spaces in first iteration is 2
    int spaces = user_input.size()-1;
    
    //Iterate for all letters of the sentence, 3 letters = 3 lines
    for (line=0; line<user_input.size(); line++)
    {   
        //Add initial blank spaces   
        for (int i=0; i<spaces; i++)
        {
            std::cout << " ";    
        }
        
        //Print letters correspondent to that line (normal order)
        //In 3rd iteration print until letter C
        for (int i=0; i<=line; i++)
        {   
            std::cout << user_input.at(i);
        }
        
        //Print letters correspondent to that line (reverse order)
        //In 3rd iteration print from B to last letter A
        for (int x=line-1; x>=0; x--)
        {   
            std::cout << user_input.at(x);
        }
        
        //Add last blank spaces
        for (int i=0; i<spaces; i++)
        {
            std::cout << " ";    
        }
        
        spaces--;
        
        std::cout << std::endl;
    }
  
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

int max_amount(const std::string &input);

int main(int argc, char *argv[])
{
    std::ifstream my_file(argv[1]);
    std::string input;
    int max{0};
    
    if( my_file.is_open() )
    {
        std::getline( my_file, input );
        max = max_amount(input);
        std::cout << "Max: " << max << std::endl;
    }
    else
    {
        std::cout << "Couldn't open file." << std::endl;
    }
    
    my_file.close();
    return 0;    
}

int max_amount(const std::string &input)
{
    int elevation{input.at(0)}; //1
    int volume{0}, aux_volume{0};
    int i_start{0};
    
    for(int i{1}; i<input.size(); i++) // percorrer vetor
    {
        if( input.at(i-1) > input.at(i) ) //check if up or down compared to last index
        {
            elevation--; //down
        }
        else if( input.at(i-1) < input.at(i) )
        {
            elevation++; //up
        }
        else
        {
            //do nothing;
        }
        
        if ( elevation < input.at(i_start) ) //count volume
        {
            aux_volume += (input.at(i_start) - elevation);
        }
        else if (elevation == input.at(i_start)) //reached end
        {
            if ( aux_volume >= volume ) //save total volume if reached new max
            {
                volume = aux_volume;
                aux_volume = 0;
            }
        }
        else //new high position
        {
            i_start = i; //save index for new start position
        }
    }
    
    return volume;
}

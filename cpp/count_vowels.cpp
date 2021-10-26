#include <iostream>
#include <string>

void count_vowels(std::string str);

int main()
{
    std::string Name = "ABCDEFGHIJ";
 
    count_vowels(Name);
    
    return 0;
}

void count_vowels(std::string str)
{
    int cnt_A=0, cnt_E=0, cnt_I=0, cnt_O=0, cnt_U=0;
    
    for(int i=0; i < str.size(); i++)
    {
        if(str[i] == 'A') cnt_A++;
        else if(str[i] == 'E') cnt_E++;
        else if(str[i] == 'I') cnt_I++;
        else if(str[i] == 'O') cnt_O++;
        else if(str[i] == 'U') cnt_U++;
    }
    
    std::cout << "Nr of A vowels: " << cnt_A << std::endl;
    std::cout << "Nr of E vowels: " << cnt_E << std::endl;
    std::cout << "Nr of I vowels: " << cnt_I << std::endl;
    std::cout << "Nr of O vowels: " << cnt_O << std::endl;
    std::cout << "Nr of U vowels: " << cnt_U << std::endl;
}

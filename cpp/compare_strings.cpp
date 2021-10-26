#include <iostream>
#include <vector>

void count_letters(std::string word, std::vector<int> &ctr);
bool compare_strings(std::vector<int> ctr1, std::vector<int> ctr2);

int main()
{
    std::string s1, s2;
    
    std::vector<int> ctr1(23, 0), ctr2(23, 0);
    
    bool diff;
    
    std::cout << "Enter two words!" << std::endl;
    
    std::cin >> s1 >> s2;
    
    count_letters(s1, ctr1);
    
    count_letters(s2, ctr2);

    diff = compare_strings(ctr1, ctr2);
    
    if(diff)
    {
        std::cout << "Strings are different." << std::endl;
    }
    else
    {
        std::cout << "Strings are equal." << std::endl;    
    }
    
    return 0;
}

bool compare_strings(std::vector<int> ctr1, std::vector<int> ctr2)
{
    bool b_different = false;
    
    for(int i{0}; i<23; i++)
    {
        if(ctr1[i]!=ctr2[i])
        {
            b_different = true;
        }
        else
        {
            //do nothing
        }
    }
    
    return b_different;
}

void count_letters(const std::string word, std::vector<int> &ctr)
{
    for(int i = 0; i != word.size(); i++)
    {   
        switch(word.at(i))
        {
            case 'a':
            case 'A':
            {
                ctr[0]++;
                break;
            }
            case 'b':
            case 'B':
            {
                ctr[1]++;
                break;
            }
            case 'c':
            case 'C':
            {
                ctr[2]++;
                break;
            }
            case 'd':
            case 'D':
            {
                ctr[3]++;
                break;
            }            
            case 'e':
            case 'E':
            {
                ctr[4]++;
                break;
            }            
            case 'f':
            case 'F':
            {
                ctr[5]++;
                break;
            }            
            case 'g':
            case 'G':
            {
                ctr[6]++;
                break;
            }            
            case 'h':
            case 'H':
            {
                ctr[7]++;
                break;
            }            
            case 'i':
            case 'I':
            {
                ctr[8]++;
                break;
            }
            case 'j':
            case 'J':
            {
                ctr[9]++;
                break;
            }               
            case 'l':
            case 'L':
            {
                ctr[10]++;
                break;
            }
            case 'm':
            case 'M':
            {
                ctr[11]++;
                break;
            }            
            case 'n':
            case 'N':
            {
                ctr[12]++;
                break;
            }            
            case 'o':
            case 'O':
            {
                ctr[13]++;
                break;
            }            
            case 'p':
            case 'P':
            {
                ctr[14]++;
                break;
            }   
            case 'q':
            case 'Q':
            {
                ctr[15]++;
                break;
            }            
            case 'r':
            case 'R':
            {
                ctr[16]++;
                break;
            }            
            case 's':
            case 'S':
            {
                ctr[17]++;
                break;
            } 
            case 't':
            case 'T':
            {
                ctr[18]++;
                break;
            }            
            case 'u':
            case 'U':
            {
                ctr[19]++;
                break;
            }            
            case 'v':
            case 'V':
            {
                ctr[20]++;
                break;
            }             
            case 'x':
            case 'X':
            {
                ctr[21]++;
                break;
            }            
            case 'z':
            case 'Z':
            {
                ctr[22]++;
                break;
            }                                       
            default:
            {
                break;
            }
        }    
    }    
}

#include <iostream>

class Stringui{
    public:
        std::string str;
        
        Stringui(std::string str)
        {
            this->str = str;
            std::cout << str << std::endl;
        }
        
        int getsize()
        {
            int i=0;
            
            while(str[i] != '\0')
            {
                i++;
            }
            
            return i;
        }
        
        void reverse()
        {
            std::string aux (str.size(), ' ');
            
            for(int i=0; i < str.size(); i++)
            {     
                aux[i] = str[str.size()-i-1];
            }
            
            str = aux;
        }
        
        void count_vowels()
        {
            int vowel_cnt[5] = {0}; 
            
            for(int i=0; i < str.size(); i++)
            {     
                switch(str[i])
                {
                    case 'A':
                    {
                        vowel_cnt[0]++;
                        break;
                    }
                    case 'E':
                    {
                        vowel_cnt[1]++;
                        break;
                    }
                    case 'I':
                    {
                        vowel_cnt[2]++;
                        break;
                    }
                    case 'O':
                    {
                        vowel_cnt[3]++;
                        break;
                    }
                    case 'U':
                    {
                        vowel_cnt[4]++;
                        break;
                    }
                }
            }
            
            std::cout << "A's: " << vowel_cnt[0] << std::endl;
            std::cout << "E's: " << vowel_cnt[1] << std::endl;
            std::cout << "I's: " << vowel_cnt[2] << std::endl;
            std::cout << "O's: " << vowel_cnt[3] << std::endl;
            std::cout << "U's: " << vowel_cnt[4] << std::endl;
        }
};

int main()
{
    Stringui *Str;
    
    Str = new Stringui("ABCDEFGHIJ");
    
    Str->reverse();
    
    std::cout << Str->str << std::endl;
    
    Str->count_vowels();
    
    int x = Str->getsize();
    
    std::cout << x << std::endl;
    
}

#include <iostream>

using namespace std;

int main()
{
    unsigned char a = 150;
    
    for (unsigned char i=0; i < a + 150; i++)
    {
        cout << "Number i: " << (int)i << endl;
    }
    
    return 0;
}

#include <iostream>

//void swap(int &x, int &y);

int main()
{
    int x=5, y=10;
    
    std::cout << "before swap x = " << x << ", y = " << y << std::endl;
    
    std::swap(x,y);
    
    std::cout << "after swap x = " << x << ", y = " << y << std::endl;
    
    return 0;
}

//void swap(int &x, int &y)
//{
//   int aux = x;
//    x=y;
//    y=aux;
//}

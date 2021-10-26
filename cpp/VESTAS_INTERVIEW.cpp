#include <iostream>

template <typename T>
bool isgreater(T l, T x)
{
    return (l>x);
}

class a
{
    public:
    
        a()
        {
            std::cout << "a" << std::endl;
        }
        
        ~a()
        {
            std::cout << "~a" << std::endl;
        }
        
        virtual void print()
        {
            std::cout << "func a" << std::endl;
        }
};

class b: public a
{
    public:
    
        b()
        {
            std::cout << "b" << std::endl;
        }
        
        ~b()
        {
            std::cout << "~b" << std::endl;
        }
        
        void print()
        {
            std::cout << "func b" << std::endl;
        }
};

int main()
{
    a *Ob1 = new a();
    a *Ob2 = new b();
    
    Ob1->print();
    Ob2->print();
    
    delete(Ob1);
    delete(Ob2);

    auto flag = isgreater<int>(3,2);
    
    std::cout << flag << std::endl;
    
    return 0;
}

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int *int_ptr {nullptr};
    double *array_dbl_ptr {nullptr};
    
    int_ptr = new int;
    array_dbl_ptr = new double[2];
    
    *int_ptr = 5;
    array_dbl_ptr[0] = 6.1;
    *(array_dbl_ptr + 1) = 7.1;
        
    cout << *int_ptr << endl;
    cout << array_dbl_ptr << endl;
    cout << array_dbl_ptr[0] << endl;
    cout << (array_dbl_ptr + 1) << endl;
    cout << *(array_dbl_ptr + 1) << endl;
    
    delete int_ptr;
    delete array_dbl_ptr;
    
    return 0;    
}

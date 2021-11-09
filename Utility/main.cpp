#include <iostream>
#include "utility.h"

int main()
{
    std::string str;
    std::cin>>str;
    if (Utility::isInteger(str))
    {
        std::cout<<"'it is a integer";
    }
    else
    {
        std::cout<<"it isn't integer";
    }
    
}
#include <iostream>
#include "utility.h"

bool Utility::isInteger(const std::string& str)
{
    if(str[0]=='-' || str[0]=='+' || (str[0]>'0' && str[0]<='9'))
    {
        for(int i=1;i<str.size();++i)
        {
            if(str[i]<'0' || str[i]>'9')
            {
                return false;
            }
        }
    }else
            {
                return false;
            }
    return true;
}
bool Utility::isFloat(const std::string& str)
{
    if(str[0]<'0' || str[0] > '9' || str[str.size()-1] < '0' || str[str.size()-1] > '9' )
    {
        return false;
    }
    int count = 0 ;
    for(int i = 1 ; i < str.size()-1 ; ++i)
    {
        if(str[i]=='.'){count++;}
        else if(!(str[i]>='0' && str[i] <= '9'))
        {
        return false;
        }
    }
    if(count == 1){return true ;}
    return false ;
}
bool Utility::isBoolean(const std::string& str)
{
    if(str[0]=='true' || str[0]=='false' || str[0]=='1' || str[0]=='0')
    {
        return true;
    }
    return false;
    
}
bool Utility::isNumber(const std::string& str)
{
    return isFloat(str) || isInteger(str);
}
bool Utility::isEmail(const std::string& str)
{
   std::regex re ("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
    return regex_search(str, re);
}

bool Utility::isURL(const std::string& str)
{
    std::regex re ("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
    return regex_search(str,re);
}
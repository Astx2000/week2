#ifndef UTILITY_H
#define UTILITY_H
#include <iostream>
#include <regex>

class Utility
{
    public:
    static bool isNumber(const std::string&);
    static bool isInteger(const std::string&);
    static bool isFloat(const std::string&);
    static bool isBoolean(const std::string&);
    static bool isEmail(const std::string&);
    static bool isURL(const std::string&);

    private:

};
#endif //UTILITY_H
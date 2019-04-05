#include <iostream>
#include <string>
#include <sstream>
int main()
{
    std::string stringlength, stringwidth;
    float length = 0;
    float width = 0;
    float area = 0;
    std::cout<<"enter the length of apartment: \n";
    std::getline(std::cin, stringlength);
    std::stringstream(stringlength)>> length;
    std::cout<<" enter the width of apartment: \n";
    std::getline(std::cin, stringwidth);
    std::stringstream(stringwidth)>>width;
    area = length * width;
    std::cout<<"\n the area of the apartment is:"<< area << std::endl;
    return 0;
    
}
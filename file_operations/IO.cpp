#include <iostream>
#include <string>
using namespace std;
int main()
{
std::string name1, address1, phonenumber1;
std::string name2, address2, phonenumber2;

std::cout<<"user1, what is your name1?\n\n";
std::getline(std::cin, name1);
std::cout<<"user1, what is your address1?\n";
std::getline(std::cin, address1);
std::cout<<"user1, what is your phone number1?\n";
std::getline(std::cin, phonenumber1);


std::cout<<"user2, what is your name2?\n";
std::getline(std::cin, name1);
std::cout<<"user2, what is your address2?\n";
std::getline(std::cin, address1);
std::cout<<"user2, what is your phone number2?\n";
std::getline(std::cin, phonenumber1);

 std::cout<<"\n\n"<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phonenumber1<<"\n";

 std::cout<<"\n\n"<<name2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phonenumber2<<"\n";

return 0;

}
#include<iostream>

int main()
{
int variable1{ 10 };
short variable2 { 5 };
long variable3 { 100 };
long long variable4 { 2000 };
float variable5 { 100.1f };
double variable6 { 100.01 };
long double variable7 { 1000.001 };
bool variable8 { true };

std::cout << "int: " << &variable1 << "\t\t" << sizeof(variable1) << std::endl;
std::cout << "short: " << &variable2 << "\t\t" << sizeof(variable2) << std::endl;
std::cout << "long: " << &variable3 << "\t\t" <<sizeof(variable3) << std::endl;
std::cout << "long long: " << &variable4 << "\t\t" << sizeof(variable4) << std::endl;
std::cout << "float: "  << &variable5 << "\t\t" << sizeof(variable5) << std::endl;
std::cout << "double: " << &variable6 << "\t\t" << sizeof(variable6) << std::endl;
std::cout << "long double: " << &variable7 <<  "\t" << sizeof(variable7) << std::endl;
std::cout << "bool: "  << &variable8 << "\t\t" << sizeof(variable8) << std::endl;

return 0;
}
#include <iostream>
#include "format.h"

namespace nekop {
	string::string() : std::string() { }
	string::string(const char *_Ptr) : std::string(_Ptr) { }
	string::string(const std::allocator<char> &_Al) : std::string(_Al) { }
	string::string(const char *_Ptr, const std::allocator<char> &_Al) : std::string(_Ptr, _Al) { }
	string::string(std::string &&_Right) : std::string(_Right) { }
	string::string(std::initializer_list<char> _Ilist, const std::allocator<char> &_Al) : std::string(_Ilist, _Al) { }
	string::string(const std::string &_Right) : std::string(_Right) { }
	string::string(std::string &&_Right, const std::allocator<char> &_Al) : std::string(_Right, _Al) { }
	string::string(const std::string &_Right, const std::allocator<char> &_Al) : std::string(_Right, _Al) { }
}

int main() {
	nekop::string str = "Hello World!!! {} {} {} {} {} {} {} {} {} {} {}";
	int a = 123;
	unsigned int b = 123;
	long c = 123;
	unsigned long d = 123;
	long long e = 123;
	unsigned long long f = 123;
	float g = 123.0;
	double h = 123.0;
	long double i = 123.0;

	std::cout << str.format("KuroNeko says...", 'Y', a, b, c, d, e, f, g, h, i) << std::endl;
	std::cin >> str;

	return 0;
}
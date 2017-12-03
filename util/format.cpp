#include <iostream>
#include <Windows.h>
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
	nekop::string str = "";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	str += "{} {} {} {} {} {} {} {} {} {}";
	
	char *a = "TestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTestTest";
	unsigned int b = 123;
	long c = 123;
	unsigned long d = 123;
	long long e = 123;
	unsigned long long f = 123;
	float g = 123.0;
	double h = 123.0;
	long double i = 123.0;
	int j = 123;
	
	LARGE_INTEGER Frequency;
	LARGE_INTEGER BeginTime;
	LARGE_INTEGER Endtime;

	//프로그램이나 클래스 시작부분에
	QueryPerformanceFrequency(&Frequency);
	//사용하고자 하는 부분에 다음 코딩
	QueryPerformanceCounter(&BeginTime);

	str.format(
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j,
		a, b, c, d, e, f, g, h, i, j // 20
	);

	QueryPerformanceCounter(&Endtime);
	__int64 elapsed = Endtime.QuadPart - BeginTime.QuadPart;
	double duringtime = (double)elapsed / (double)Frequency.QuadPart;

	std::cout << duringtime << std::endl;
	
	std::cin >> str;

	return 0;
}
#pragma once

#include <string>

namespace std {
	std::string to_string(const char *ptr) { return std::string(ptr); }
	std::string to_string(char ch) { return std::string() + ch; }
}

namespace nekop {
	class string : public std::string {
	public:
		string();
		string(const char *_Ptr);
		string(const std::allocator<char> &_Al);
		string(const char *_Ptr, const std::allocator<char> &_Al);
		string(std::string &&_Right);
		string(std::initializer_list<char> _Ilist, const std::allocator<char> &_Al);
		string(const std::string &_Right);
		string(std::string &&_Right, const std::allocator<char> &_Al);
		string(const std::string &_Right, const std::allocator<char> &_Al);

	public:
		template< typename T >
		std::string format(const T& t) {
			size_t start = 0;
			size_t pos = this->find("{}", start);
			std::string org = *this;
			std::string ret = org;

			if (pos != std::string::npos) {
				std::string *ptr = this;
				std::string value = std::to_string(t);

				ret = substr(start, pos) + value + substr(pos + 2);
			}
			
			*this = org;

			return ret;
		}

		template< typename _First, typename ... Rest >
		std::string format(const _First &first, const Rest & ... rest) {
			size_t start = 0;
			size_t pos = this->find("{}", start);
			std::string org = *this;

			if (pos != std::string::npos) {
				std::string *ptr = this;
				std::string value = std::to_string(first);

				*ptr = substr(start, pos) + value + substr(pos + 2);

				return format(rest...);
			}

			return *this;
		}
	};
}
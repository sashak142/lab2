#include "number.h"


uint2022_t from_uint(uint32_t i) {
	uint2022_t t;
	t.x = i;
	return t;
}

uint2022_t from_string(const char* buff) {
	uint2022_t t;
	t.x = 0;
	std::string s = buff;
	for (char c : s)
	{
		if (c >= '0' && c <= '9') {
			t.x = t.x * 10 + (c - '0');
		}
	}
	return t;
}

uint2022_t operator+(const uint2022_t& lhs, const uint2022_t& rhs) {
	uint2022_t t;
	t.x = lhs.x + rhs.x;
	return t;
}

uint2022_t operator-(const uint2022_t& lhs, const uint2022_t& rhs) {
	uint2022_t t;
	t.x = lhs.x - rhs.x;
	return t;
}

uint2022_t operator*(const uint2022_t& lhs, const uint2022_t& rhs) {
	uint2022_t t;
	t.x = lhs.x * rhs.x;
	return t;
}

uint2022_t operator/(const uint2022_t& lhs, const uint2022_t& rhs) {
	uint2022_t t;
	t.x = lhs.x / rhs.x;
	return t;
}

bool operator==(const uint2022_t& lhs, const uint2022_t& rhs) {
	bool t;
	t = lhs.x == rhs.x;
	return t;
}

bool operator!=(const uint2022_t& lhs, const uint2022_t& rhs) {
	bool t;
	t = lhs.x != rhs.x;
	return t;
}

std::ostream& operator<<(std::ostream& stream, const uint2022_t& value) {
	stream << value.x;
	return stream;
}
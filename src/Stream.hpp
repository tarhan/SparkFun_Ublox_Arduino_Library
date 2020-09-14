#pragma once

#include <cstdint>

enum FormattingFlag {
    DEC,
    HEX,
};

class Stream {
public:
	Stream();
	virtual ~Stream();
	void print(const char* str);
	void print(int8_t value);
	void print(uint8_t value, FormattingFlag flag = DEC);
	void print(uint16_t value, FormattingFlag flag = DEC);
	void print(uint32_t value, FormattingFlag flag = DEC);
	void println(uint8_t value, FormattingFlag flag = DEC);
	void println(uint16_t value, FormattingFlag flag = DEC);
	void println(const char* str);
	void println(long unsigned int value);
	void println(float value);
	void print(float value);
	void println() {};
	bool available() { return false; };
	void write(char byte) {};
	uint8_t read() { return 0; };
};

extern Stream Serial;

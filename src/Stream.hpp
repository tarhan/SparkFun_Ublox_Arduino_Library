#pragma once

class Stream {
public:
	Stream();
	virtual ~Stream();
	void print(const char* str);
};

extern Stream Serial;

#pragma once
#include <vector>
#include <algorithm>

class Cool
{
public:
	Cool();
	~Cool();

	void fillvector();
	void Print();
	int pop();
private:
	std::vector<int> ints;
};


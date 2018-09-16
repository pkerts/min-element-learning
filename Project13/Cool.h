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
	struct Node
	{
		int value;
	};
	std::vector<Node> ints;
	/*struct comp
	{
		bool operator()(int l, int r)
			return l > r;
	};*/
};


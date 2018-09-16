#pragma once
#include <vector>
#include <algorithm>

class Cool
{
private:
	struct Node
	{
		int value;
	};
	std::vector<Node> ints;


public:
	Cool();
	~Cool();
	/*bool comp(Node const& l, Node const& r)
	{
		return l->value > r->value;
	}*/

	void fillvector();
	void Print();
	int pop();


};
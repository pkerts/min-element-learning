#include "Cool.h"
#include <iostream>


Cool::Cool()
{
}


Cool::~Cool()
{
}

// DONE
void Cool::fillvector()
{
	for (auto i = 36; i > 1; --i)
		ints.emplace_back(i);
	ints.emplace_back(1);
	for (auto i = 2; i < 37; ++i)
		ints.emplace_back(i);
}

// DONE
void Cool::Print()
{
	for (const auto i : ints)
		std::cout << i << " ";
}

int Cool::pop()
{
	// auto min = std::min
	return 0;
}

auto main()->int {
	Cool mel; // (min_element_learning)
	mel.fillvector();
	mel.Print();

	return 0;
}
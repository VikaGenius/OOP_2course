#pragma once
#include <stack>
#include <string>
#include <memory>
#include <queue>

class CommandForth {
public:
	//virtual void Operation() = 0;
	virtual void Operation(std::stack <int>& stack1, std::deque<std::string>& instruction) = 0;
	//std::stack <int> stack1; 
};

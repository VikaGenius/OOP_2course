#pragma once

#include "CommandForth.h"

class ArithmeticOperation : public CommandForth {

	//Performs an addition, subtraction, or multiplication operation
	void Operation(std::stack <int>& stack1, std::deque<std::string>& instruction) override;
};

std::unique_ptr<CommandForth> CreateArithmeticOperation();

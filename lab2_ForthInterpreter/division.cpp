#include "division.h"

#include <stdexcept>

void OperationDivision::Operation(std::stack <int>& stack1, std::deque<std::string>& instruction) {
	const std::string oper = instruction.front();
	instruction.pop_front();
	if (stack1.size() > 1) {
		int a = stack1.top();
		stack1.pop();
		int b = stack1.top();
		stack1.pop();
		if (b == 0) {
			throw std::invalid_argument("Error: division by zero");
		}
		if (oper == "/") {
			stack1.push(b / a);
			return;
		}
		if (oper == "mod") {
			stack1.push(b % a);
			return;
		}
	}
	if (!stack1.empty()) {
		stack1.pop();
	}
	throw std::invalid_argument("Error: not enough numbers to complete the operation");
}

std::unique_ptr<CommandForth> CreateOperationDivision() {
	return std::unique_ptr<CommandForth>(new OperationDivision);
}
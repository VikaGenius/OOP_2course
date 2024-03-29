﻿/*#include "Factory.h"
#include "arithmetic.h"
#include "division.h"
#include "internalcommands.h"
#include "logicaloperations.h"
#include "printstring.h"
#include "ifoperator.h"
#include "doloop.h"
#include "Forth.h"

#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <deque>

void Registration(Factory<CommandForth, std::string, CommandForth*(*)()>& factory) {
    factory.RegisterCommand("+", CreateArithmeticOperation);
    factory.RegisterCommand("-", CreateArithmeticOperation);
    factory.RegisterCommand("*", CreateArithmeticOperation);
    factory.RegisterCommand("/", CreateOperationDivision);
    factory.RegisterCommand("mod", CreateOperationDivision);
    factory.RegisterCommand(">", CreateLogicalOperation);
    factory.RegisterCommand("<", CreateLogicalOperation);
    factory.RegisterCommand("=", CreateLogicalOperation);
    factory.RegisterCommand("drop", CreateInternalCommands);
    factory.RegisterCommand("cr", CreateInternalCommands);
    factory.RegisterCommand("dup", CreateInternalCommands);
    factory.RegisterCommand(".", CreateInternalCommands);
    factory.RegisterCommand("emit", CreateInternalCommands);
    factory.RegisterCommand("swap", CreateInternalCommands);
    factory.RegisterCommand("rot", CreateInternalCommands);
    factory.RegisterCommand("over", CreateInternalCommands);
    factory.RegisterCommand("drop", CreateInternalCommands);
    factory.RegisterCommand("if", CreateOperatorIf);
    factory.RegisterCommand(".\"", CreatePrintString);
    factory.RegisterCommand("do", CreateDoLoop);
}

bool IsNumber(const std::string& str) { //часть функции взята с стековерфлоу :D
    if (str[0] == '-' && str[1]) { //+
        return std::all_of(str.begin() + 1, str.end(), [](const char& ch) { return isdigit(ch); });
    }
    return std::all_of(str.begin(), str.end(), [](const char& ch) { return isdigit(ch); });
}

void Parser(Factory<CommandForth, std::string, CommandForth*(*)()>& factory, std::stack<int>& stack1, std::deque<std::string>& instruction, std::istream& input, std::ostream& output) {
    while (!instruction.empty()) {
        if (IsNumber(instruction.front())) {
            stack1.push(std::stoi(instruction.front()));
            instruction.pop_front();
        }
        else {
            auto oper = std::unique_ptr<CommandForth>(factory.CreateCommand(instruction.front()));
            oper->Operation(stack1, instruction, input, output);
        }
    }
}

void Executor(std::stack<int>& stack1, std::istream& input, std::ostream& output) {
    std::string str, word;
    std::stringstream stream;

    Factory<CommandForth, std::string, CommandForth*(*)()> factory;
    Registration(factory);
    std::deque<std::string> instruction;
    while (std::getline(input, str)) {
            stream.clear();
            stream << str;
            while (stream >> word) {
                instruction.push_back(word);
            }
            Parser(factory, stack1, instruction, input, output);
        }
}
*/
// int main(int argc, char* argv[]) {
//    std::string str, word;



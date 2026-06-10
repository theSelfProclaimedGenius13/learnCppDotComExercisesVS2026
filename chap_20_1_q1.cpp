#include <iostream>
#include <functional>

using ArithmeticFunction = std::function<int(int, int)>;
bool invalid_input_chap_20_1_q1() {
	if (!std::cin || (!std::cin.eof() && std::cin.peek() != '\n')) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return true;
	}
	return false;
}
int get_integer_input_chap_20_1_q1() {
	int value;
	std::cin >> value;
	if (invalid_input_chap_20_1_q1()) {
		std::cout << "Invalid input. Please enter an integer.\n";
		return get_integer_input_chap_20_1_q1();
	}
	else {
		return value;
	}
}
char get_operator_input_chap_20_1_q1() {
	std::cout << "Enter an operator (+, -, *, /): ";
	char op;
	std::cin >> op;
	if (invalid_input_chap_20_1_q1() || (op != '+' && op != '-' && op != '*' && op != '/')) {
		std::cout << "Invalid operator. Please enter one of +, -, *, /.\n";
		return get_operator_input_chap_20_1_q1();
	}
	else {
		return op;
	}
}
int add_chap_20_1_q1(int a, int b) {
	return a + b;
}

int subtract_chap_20_1_q1(int a, int b) {
	return a - b;
}

int multiply_chap_20_1_q1(int a, int b) {
	return a * b;
}

int divide_chap_20_1_q1(int a, int b) {
	if (b == 0) {
		std::cerr << "Error: Division by zero!" << std::endl;
		return 0; 
	}
	return a / b;
}

ArithmeticFunction get_operation_function_chap_20_1_q1(char op) {
	switch (op) {
	case '+':
		return add_chap_20_1_q1;
	case '-':
		return subtract_chap_20_1_q1;
	case '*':
		return multiply_chap_20_1_q1;
	case '/':
		return divide_chap_20_1_q1;
	default:
		return nullptr;
	}
}

void perform_calculation_chap_20_1_q1() {
	std::cout << "Enter the first integer: ";
	int a = get_integer_input_chap_20_1_q1();
	std::cout << "Enter the second integer: ";
	int b = get_integer_input_chap_20_1_q1();
	char op = get_operator_input_chap_20_1_q1();
	ArithmeticFunction operation  {get_operation_function_chap_20_1_q1(op)};
	if (operation) {
		std::cout << a << " " << op << " " << b << " = " << operation(a, b) << "\n";
	}
}

void result_message_chap_20_1_q1() {
	perform_calculation_chap_20_1_q1();
}
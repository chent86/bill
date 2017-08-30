#ifndef PRINTER_HPP
#define PRINTER_HPP

#include "defines.hpp"
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class printer{
public:
	printer(string computer_name, string printer_name);

	~printer();

	void print(form& m_form);

private:
	string computer_name;
	string printer_name;
};

#endif

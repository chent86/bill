#ifndef PRINTER_HPP
#define PRINTER_HPP

#include "defines.hpp"
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class printer{
public:
    printer(string computer_name, string printer_name, string file_name);

	~printer();

	void print(form& m_form);

private:
	string computer_name;
	string printer_name;
};

#endif

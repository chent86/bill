#ifndef PRINTER_HPP
#define PRINTER_HPP

#include "defines.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
using namespace std;

class printer{
public:
	printer(string printer_name);

	~printer();

	void print(form& m_form);

private:
	string computer_name;
	string printer_name;
};

#endif

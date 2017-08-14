#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "defines.hpp"

class database{
public:
	database();

	~database();

	void insert(form& m_form);   //save new form

	void check(form& m_form, string id);		 //check old form with id
	
};

#endif
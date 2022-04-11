#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"


class tendik : public person {
private:
	std::string npp;
	std::string unitkerja;

public:
	tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unitkerja);

	void setunitkerja(std::string unitkerja);
	std::string getunitkerja();	
	std::string getNPP();	
};

#endif

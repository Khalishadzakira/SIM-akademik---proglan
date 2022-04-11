#include <iostream>
#include "include/tendik.hpp"


tendik::tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unitkerja)
		: person(id, nama, dd, mm, yy), npp(npp), unitkerja(unitkerja)
{
}

void tendik::setunitkerja(std::string unitkerja)
{
	this->unitkerja = unitkerja;
}

std::string tendik::getunitkerja()
{
	return this->unitkerja;
}


std::string tendik::getNPP()
{
	return this->npp;
}

/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

#include "Fraction.hpp"
#include <string>
#include <sstream>

Fraction::Fraction() {
	// TODO Auto-generated constructor stub

}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

Fraction::Fraction(int n, int d)
{
	_numerateur = n;
	_denominateur = d;
}


float Fraction::getNumerateur() const
{
	return _numerateur;
}
void Fraction::setNumerateur(const float number)
{
	_numerateur=number;
}

float Fraction::getDenominateur() const
{
	return _denominateur;
}
void Fraction::setDenominateur(const float number)
{
	_denominateur=number;
}

string Fraction::Afficher()
{
	string element = "" + toString(this->_numerateur) + "/" + toString(this->_denominateur);

	return element;
}
void Fraction::addition(const int add)
{
	int nFraction = add;
	int dFraction = 1;
	int nResult = this->_numerateur*this->_denominateur+nFraction*dFraction;
	int dResult = this->_denominateur*dFraction;
	setNumerateur(nResult);
	setDenominateur(dResult);

}
void Fraction::addition(const Fraction& maFraction)
{
	int n_fraction = maFraction.getNumerateur();
	int d_fraction = maFraction.getDenominateur();
	int n_result = this->_numerateur*this->_denominateur+n_fraction*d_fraction;
	int d_result = this->_denominateur*d_fraction;
	setNumerateur(n_result);
	setDenominateur(d_result);

}
string Fraction::toString(const int nb)
{
   std::ostringstream oss;
   oss << nb;
   return oss.str();
}

void Fraction::operator+(const Fraction& ma_fraction)
{
	addition(ma_fraction);
}
void Fraction::operator+(int operateur)
{
	addition(operateur);
}

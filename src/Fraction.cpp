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
void Fraction::addition(int add)
{

}
void Fraction::addition(const Fraction&)
{

}
string Fraction::toString(const int nb)
{
   std::ostringstream oss;
   oss << nb;
   return oss.str();
}

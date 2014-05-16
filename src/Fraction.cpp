/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

#include "Fraction.hpp"

Fraction::Fraction() {
	// TODO Auto-generated constructor stub

}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
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

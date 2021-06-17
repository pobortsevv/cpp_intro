/*
 * ===================================================================
 *
 *       Filename:  PlasmaRifle.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:33:02
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& obj) : AWeapon(obj)
{}

PlasmaRifle::~PlasmaRifle(void)
{}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

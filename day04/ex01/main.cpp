/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 13:49:54
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "DesertEagle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "WhiteWalker.hpp"
#include "SuperMutant.hpp"

int main(void)
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete pr;
	delete pf;
	delete me;

	std::cout << "\n===== My tests =====\n" << std::endl;
	
	Character batman("Batman");
	std::cout << batman;

	Enemy *hodok = new WhiteWalker();
	AWeapon *eagle = new DesertEagle();

	batman.equip(eagle);
	while (hodok->getHP() - eagle->getDamage() >= 0)
	{
		std::cout << batman;
		batman.attack(hodok);
	}
	std::cout << batman;
	batman.recoverAP();
	std::cout << batman;
	batman.recoverAP();
	std::cout << batman;
	batman.recoverAP();
	std::cout << batman;
	batman.recoverAP();
	std::cout << batman;
	delete hodok;
	delete eagle;

	return 0;
}

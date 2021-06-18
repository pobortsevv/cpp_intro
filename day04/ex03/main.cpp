/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 19:15:09
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;

	std::cout << "======= My tests ======" << std::endl;
	
	std::cout << tmp->getXP() << std::endl;

	ICharacter *tom = new Character("tom");
	
	me->use(1, *tom);
	std::cout << tmp->getXP() << std::endl;
	
	delete me;
	delete tom;
	delete src;

	return 0;
}

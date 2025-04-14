/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:55:50 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 09:42:05 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongDog();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    std::cout << std::endl;
    wrongMeta->makeSound();
    wrongJ->makeSound();
    wrongI->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;
    delete wrongI;
    return 0;
}
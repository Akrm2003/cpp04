/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:55:50 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 10:21:02 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


// Animal a would not compile because Animal is an abstract class

int main() {
    
    std::cout << "=== Creating Animals ===" << std::endl;

    Animal* animals[4];

    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();

    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    std::cout << "\n=== Making Sounds ===" << std::endl;

    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();

    std::cout << "\n=== Cleaning Up ===" << std::endl;

    for (int i = 0; i < 4; ++i)
        delete animals[i];

    return 0;
}



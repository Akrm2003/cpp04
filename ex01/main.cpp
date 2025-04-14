/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:55:50 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 10:17:11 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#define ARRAY_SIZE 4

int main()
{
    std::cout << "=== Creating Animals ===" << std::endl;
    Animal* animals[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (i < ARRAY_SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== Testing Deep Copy ===" << std::endl;

    Dog originalDog;
    originalDog.setIdea(0, "Bark at the mailman");

    Dog copyDog(originalDog); // copy constructor
    std::cout << "Original Dog Idea: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea:   " << copyDog.getIdea(0) << std::endl;

    copyDog.setIdea(0, "Sleep all day");

    std::cout << "After modifying copy:" << std::endl;
    std::cout << "Original Dog Idea: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea:   " << copyDog.getIdea(0) << std::endl;

    std::cout << "\n=== Deleting Animals ===" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        delete animals[i];

    return 0;
}


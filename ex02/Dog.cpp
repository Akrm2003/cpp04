/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:22:00 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 10:05:14 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other); // if needed
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog()
{
    if (this->brain)
        delete this->brain;
    this->brain = nullptr;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < BRAIN_SIZE)
        this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    if (index >= 0 && index < BRAIN_SIZE)
        return this->brain->getIdea(index);
    return "";
}

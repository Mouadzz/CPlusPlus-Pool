/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:46:46 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/06 20:29:14 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(Intern &copy) { *this = copy; }
void Intern::operator=(const Intern &copy)
{
    (void)&copy;
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *forms[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
    std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            for (int k = 0; k < 3; k++)
            {
                if (i != k)
                    delete forms[k];
            }
            std::cout << "Intern creates " << forms[i]->getName() << "." << std::endl;
            return forms[i];
        }
    }
    for (int k = 0; k < 3; k++)
        delete forms[k];
    std::cout << "Requested form is unknown !!!" << std::endl;
    return nullptr;
}
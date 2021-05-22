/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:35:00 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 11:29:00 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade = -5;
    try
    {
        Bureaucrat obj(grade, "Zed");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    grade = 155;
    try
    {
        Bureaucrat obj(grade, "LeBlanc");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    grade = 5;
    try
    {
        Bureaucrat obj(grade, "Cassiopia");
        obj.incrementGrade();
        std::cout << obj;
        obj.decrementGrade();
        std::cout << obj;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    grade = 1;
    try
    {
        Bureaucrat obj(grade, "Nunu");
        std::cout << obj;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat obj(grade, "Nunu");
        obj.incrementGrade();
        std::cout << obj;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    grade = 150;
    try
    {
        Bureaucrat obj(grade, "Lulu");
        obj.decrementGrade();
        std::cout << obj;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
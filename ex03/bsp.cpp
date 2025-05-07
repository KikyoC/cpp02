/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:58:37 by togauthi          #+#    #+#             */
/*   Updated: 2025/05/07 13:03:51 by togauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>
#include <iostream>

bool bsp(Point const *a, Point const *b, Point const *c, Point const *point)
{
	float d = (b->getY() - c->getY()) * (a->getX() - c->getX()) + (c->getX() - b->getX()) * (a->getY() - c->getY());
	float d1 = (b->getY() - c->getY()) * (point->getX() - c->getX()) + (c->getX() - b->getX()) * (point->getY() - c->getY());
	float d2 = (c->getY() - a->getY()) * (point->getX() - c->getX()) + (a->getX() - c->getX()) * (point->getY() - c->getY());
	float d3 = (a->getY() - b->getY()) * (point->getX() - b->getX()) + (b->getX() - a->getX()) * (point->getY() - b->getY());

	float al = d1 / d;
	float be = d2 / d;
	float ce = d3 / d;

	std::cout << "al " << al << " be is " << be << " ce is " << ce << std::endl;

	return (al > 0 && be > 0 && ce > 0);

}

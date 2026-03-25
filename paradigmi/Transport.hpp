#pragma once
#ifndef _TRANSPORT_HPP_
#define _TRANSPORT_HPP_

#include <iostream>
#include <format>
#include <string>

class Transport
{
public:
	explicit Transport(int distance) : distance(distance){}

	virtual double routePrice() const = 0;
	virtual std::string PrintInfo() const { return std::format("Я транспорт. Затраты: {}\n", routePrice()); }

	virtual double GetDistance() const;
	virtual void SetDistance(double distance);

	virtual ~Transport() = default;

protected:
	double distance = 0;
};

class Taxi : public Transport
{
public:
	Taxi(int distance) : Transport(distance) {}

	double routePrice() const override { return distance * 3.5; }
	std::string PrintInfo() const override { return std::format("Я такси. Затраты: {}\n", routePrice()); }

private:

};

class Plane : public Transport
{
public:
	Plane(int distance) : Transport(distance) {}

	double routePrice() const override { return distance * 3.5; }
	std::string PrintInfo() const override { return std::format("Я самолет. Затраты: {}\n", routePrice()); }

private:


};


#endif // !_TRANSPORT_HPP_


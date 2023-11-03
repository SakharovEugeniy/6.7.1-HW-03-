#pragma once

#include "IElectronics.h"
#include "Device.h"

#include <string>

class Appliances : virtual public IElectronics
{
protected:
	int _weight;

public:
	Appliances(int weight);
	void ShowSpec() override;
	
};


class Fridge final : public Appliances
{
	double _temperatureFrezer;

public:
	Fridge(int weight, double temperatureFrezer);

	void ShowSpec() override;

};


class RobotCleaner final : public Appliances, Device
{
	std::string _brand;

public:
	RobotCleaner(int weight, int batteryLife, std::string brand);

		void ShowSpec() override;
};

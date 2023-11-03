
#include "Appliances.h"


Appliances::Appliances(int weight) : _weight(weight){}

void Appliances::ShowSpec()
{
	std::cout << "Weight: " << _weight << '\n';
}


Fridge::Fridge(int weight, double temperatureFrezer) : Appliances(weight), _temperatureFrezer(temperatureFrezer) {}

void Fridge::ShowSpec()
{
	std::cout << "Weight: " << _weight << '\n';
	std::cout << "Temperature of Frezer: " << _temperatureFrezer << '\n';
}


RobotCleaner::RobotCleaner(int weight, int batteryLife, std::string brand) : Appliances(weight), Device(batteryLife), _brand(brand) {}

void RobotCleaner::ShowSpec()
{
	std::cout << "Weight: " << _weight << '\n';
	std::cout << "BatteryLife: " << _batteryLife << '\n';
	std::cout << "Brand: " << _brand << '\n';
}


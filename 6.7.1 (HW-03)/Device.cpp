#include <iostream>
#include "Device.h"




Device::Device(int batteryLife) : _batteryLife(batteryLife){}

void Device::ShowSpec()
{
	std::cout << "Battery Life: " << _batteryLife << '\n';
}



Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks){}

void Player::ShowSpec()
{
	std::cout << "Battery Life: " << _batteryLife << '\n';
	std::cout << "Total tracks: " << _totalTracks << '\n';
}


Smartphone::Smartphone(int batteryLife, int diagonal, AndroidVersion androidVersion) : Device(batteryLife), _diagonal(diagonal), _androidVersion(androidVersion) {}

void Smartphone::ShowSpec()
{
	std::cout << "Battery Life: " << _batteryLife << '\n';
	std::cout << "Diagonal: " << _diagonal << '\n';
	std::cout << "AndroidVersion: " << static_cast<int>(_androidVersion) << '\n';
}



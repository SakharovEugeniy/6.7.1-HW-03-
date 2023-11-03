#pragma once

#include "IElectronics.h"

#include <string>

class Device : virtual public IElectronics
{
protected:
	int _batteryLife;

public:
	Device(int batteryLife);

	void ShowSpec() override;
};


class Player final : public Device
{
	int _totalTracks;

public:
	Player(int batteryLife, int totalTracks);

	void ShowSpec() override;

};


enum class AndroidVersion
{
	androidVersion_1,
	androidVersion_2,
	androidVersion_3
};


class Smartphone final : public Device
{
	int _diagonal;
	AndroidVersion _androidVersion;

public:
	Smartphone(int batteryLife, int _diagonal, AndroidVersion androidVersion);

	void ShowSpec() override;

};



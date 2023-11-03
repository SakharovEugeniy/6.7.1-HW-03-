#pragma once
#include <iostream>

class IElectronics
{

public:
	virtual void ShowSpec() = 0;

	virtual ~IElectronics() {};
};
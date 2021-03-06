#pragma once
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include "BinaryLightController.h"
#include <iostream>
#include <map>
#include "../rc-switch/RCSwitch.h"

class BL_433
{
public:
	BL_433();

	void initialise();
	void turnon(int group);
	void turnoff(int group);

private:
	std::map<int, int> on_cmds;
	std::map<int, int> off_cmds;
	unsigned int repeats;
	RCSwitch mySwitch;
};

#pragma once

#include <Windows.h>

class ConstantGameSpeedIndependentVariableFPS
{
public:
	ConstantGameSpeedIndependentVariableFPS();
	~ConstantGameSpeedIndependentVariableFPS();

	void run();
	void stop();

private:
	bool _running = true;

	const int TICKS_PER_SECOND = 25;
	const int SKIP_TICKS = 1000 / TICKS_PER_SECOND;
	const int MAX_FRAMESKIP = 5;

	DWORD next_game_tick = GetTickCount();
	int loops = 0;
	float interpolation = 0;
};
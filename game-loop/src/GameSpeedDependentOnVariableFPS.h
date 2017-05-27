#pragma once

#include <Windows.h>

class GameSpeedDependentVariableFPS
{
public:
	GameSpeedDependentVariableFPS();
	~GameSpeedDependentVariableFPS();

	void run();
	void stop();

private:
	bool _running = true;

	DWORD prev_frame_tick;
	DWORD curr_frame_tick = GetTickCount();
	float interpolation = 0;
};
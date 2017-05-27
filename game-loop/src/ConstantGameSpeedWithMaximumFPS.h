#pragma once

#include<Windows.h>

class ConstantGameSpeedMaximumFPS
{
public:
	ConstantGameSpeedMaximumFPS();
	~ConstantGameSpeedMaximumFPS();

	void run();
	void stop();

private:
	bool _running = true;
	
	const int TICKS_PER_SECOND = 50;
	const int SKIP_TICKS = 1000 / TICKS_PER_SECOND;
	const int MAX_FRAMESKIP = 10;

	DWORD next_game_tick = GetTickCount();
	int loops = 0;
};
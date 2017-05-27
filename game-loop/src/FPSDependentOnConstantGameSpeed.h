#pragma once
#include <Windows.h>

class FpsDependentConstantGameSpeedLoop
{
public:
	FpsDependentConstantGameSpeedLoop();
	~FpsDependentConstantGameSpeedLoop();

	void run();
	void stop();

private:
	bool _running = true;
	const int FRAMES_PER_SECOND = 25;
	const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;

	DWORD next_game_tick = GetTickCount();
	// GetTickCount() returns the current number of millisecons
	// that have elapsed since the system was started

	int sleep_time = 0;
};
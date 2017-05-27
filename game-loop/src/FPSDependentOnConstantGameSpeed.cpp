#include "FPSDependentOnConstantGameSpeed.h"

FpsDependentConstantGameSpeedLoop::FpsDependentConstantGameSpeedLoop()
{

}

FpsDependentConstantGameSpeedLoop::~FpsDependentConstantGameSpeedLoop()
{

}

void FpsDependentConstantGameSpeedLoop::run()
{
	while (_running)
	{
		// Handle Input...
		// Update Game...
		// Render Game...

		next_game_tick += SKIP_TICKS;
		sleep_time = next_game_tick - GetTickCount();
		if (sleep_time >= 0)
		{
			Sleep(sleep_time);
		}
		else {
			// Shit, we're running behind!
		}
	}
}

void FpsDependentConstantGameSpeedLoop::stop()
{
	_running = false;
}
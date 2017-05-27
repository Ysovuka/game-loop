#include "ConstantGameSpeedWithMaximumFPS.h"

ConstantGameSpeedMaximumFPS::ConstantGameSpeedMaximumFPS()
{

}

ConstantGameSpeedMaximumFPS::~ConstantGameSpeedMaximumFPS()
{

}

void ConstantGameSpeedMaximumFPS::run()
{
	while (_running)
	{
		loops = 0;
		
		while (GetTickCount() > next_game_tick && loops < MAX_FRAMESKIP)
		{
			// Handle Input...
			// Update Game...

			next_game_tick += SKIP_TICKS;
			loops++;
		}

		// Render Game...
	}
}

void ConstantGameSpeedMaximumFPS::stop()
{
	_running = false;
}
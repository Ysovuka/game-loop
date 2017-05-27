#include "ConstantGameSpeedIndependentOfVariableFPS.h"

ConstantGameSpeedIndependentVariableFPS::ConstantGameSpeedIndependentVariableFPS()
{

}

ConstantGameSpeedIndependentVariableFPS::~ConstantGameSpeedIndependentVariableFPS()
{

}

void ConstantGameSpeedIndependentVariableFPS::run()
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

		interpolation = float(GetTickCount() + SKIP_TICKS - next_game_tick)
			/ float(SKIP_TICKS);
		// Render Game with interpolation...
	}
}

void ConstantGameSpeedIndependentVariableFPS::stop()
{
	_running = false;
}
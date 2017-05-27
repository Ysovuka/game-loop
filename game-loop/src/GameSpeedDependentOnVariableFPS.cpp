#include "GameSpeedDependentOnVariableFPS.h"

GameSpeedDependentVariableFPS::GameSpeedDependentVariableFPS()
{

}
GameSpeedDependentVariableFPS::~GameSpeedDependentVariableFPS()
{

}

void GameSpeedDependentVariableFPS::run()
{
	while (_running)
	{
		prev_frame_tick = curr_frame_tick;
		curr_frame_tick = GetTickCount();

		interpolation = float(curr_frame_tick) - float(prev_frame_tick);
		// Handle Input...
		// Update Game with interpolation...
		// Render Game...
	}
}

void GameSpeedDependentVariableFPS::stop()
{
	_running = false;
}
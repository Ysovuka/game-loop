#include "NaiveApproach.h"

NaiveLoop::NaiveLoop() {

}

NaiveLoop::~NaiveLoop() {

}

void NaiveLoop::run()
{
	while (_running)
	{
		// Handle Input...
		// Update Game...
		// Render Game...
	}
}

void NaiveLoop::stop()
{
	_running = false;
}
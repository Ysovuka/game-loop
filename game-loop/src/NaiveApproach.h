#pragma once

class NaiveLoop
{
public:
	NaiveLoop();
	~NaiveLoop();

	void run();
	void stop();

private:
	bool _running = true;
};
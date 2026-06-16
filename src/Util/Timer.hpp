#pragma once
#include "Pch.hpp"

class Timer
{
public:
	explicit Timer(std::chrono::milliseconds delay);

	bool Updated();

	bool IsUpdated() const;

	void SetDelay(std::chrono::milliseconds delay);

	std::chrono::milliseconds GetElapsed() const;

	void Reset();

private:
	std::chrono::high_resolution_clock::time_point m_Timer;
	std::chrono::high_resolution_clock::duration m_Delay;
};
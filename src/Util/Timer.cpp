#include "Timer.hpp"

Timer::Timer(std::chrono::milliseconds delay) : m_Timer(std::chrono::high_resolution_clock::now()), m_Delay(delay)
{
}

bool Timer::Updated()
{
    auto now = std::chrono::high_resolution_clock::now();
    if (std::chrono::duration_cast<std::chrono::milliseconds>(now - m_Timer) >= m_Delay)
    {
        m_Timer = now;
        return true;
    }

    return false;
}

bool Timer::IsUpdated() const
{
    auto now = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(now - m_Timer) >= m_Delay;
}

void Timer::SetDelay(std::chrono::milliseconds delay)
{
    m_Delay = delay;
}

std::chrono::milliseconds Timer::GetElapsed() const
{
    auto now = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(now - m_Timer);
}

void Timer::Reset()
{
    m_Timer = std::chrono::high_resolution_clock::now();
}
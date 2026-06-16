#pragma once

using ScriptFunc = void (*)();

class Script
{
public:
    explicit Script(ScriptFunc func);
    ~Script();

    static Script *GetCurrent();

    [[nodiscard]] HANDLE GetModule() const;

    [[nodiscard]] bool IsCurrent() const noexcept;

    void Stop();

    bool Tick();

    void Yields();

    void Yields(time_t minSleepMs);

public:
    ScriptFunc m_Func;

    inline static void *m_RetFiber = nullptr;

private:
    void FiberFunc();

    void *m_Fiber = nullptr;
};
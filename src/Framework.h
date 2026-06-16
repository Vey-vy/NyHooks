#pragma once

#define IMGUI_DEFINE_MATH_OPERATORS
#include <windows.h>
#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include <stdexcept>
#include <functional>
#include <array>
#include <filesystem>
#include <thread>
#include <mutex>
#include <iostream>
#include <fstream>
#include <shlobj.h>
#include <map>
#include <set>
#include <d3d9.h>
#include <dxgi1_2.h>
#include <dxgi1_4.h>
#include <wrl/client.h>
#include <ranges>
#include <stack>
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <cassert>
#include <mutex>
#include <shared_mutex>
#include <variant>

#include <MinHook.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <backends/imgui_impl_dx9.h>
#include <backends/imgui_impl_win32.h>


#define PROJECT_NAME "NyHooks"
#define PROJECT_VERSION "1.0.0"

#define PROCESS "GTAIV.exe"

#define REL(o)       \
	o->Release();    \
	if (o) {         \
		o = nullptr; \
	}

#define HEX_TO_UPPER(value) \
	"0x" << std::hex << std::uppercase << (DWORD32)value << std::dec << std::nouppercase
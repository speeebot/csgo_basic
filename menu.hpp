#pragma once

#include <string>
#include "singleton.hpp"
#include "imgui/imgui.h"

struct IDirect3DDevice9;

class Menu
	: public Singleton<Menu>
{
private:
	void CreateStyle();

	ImGuiStyle _style;
	bool _visible;

public:
	void Initialize();
	void Shutdown();

	void OnDeviceLost();
	void OnDeviceReset();

	void Render();

	void Toggle();

	bool IsVisible() const { return _visible; }
};
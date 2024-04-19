#pragma once
#include <Windows.h>

void TitleWindow(LPCSTR WindowTitle) {
	HWND WinTitle = FindWindowA(NULL, WindowTitle);
	if (IsWindow(WinTitle))
	{
		ExitProcess(-1);
	}
}

void Processer()
{
	TitleWindow("cheat engine settings");
}
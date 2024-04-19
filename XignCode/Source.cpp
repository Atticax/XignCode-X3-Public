#include <Windows.h>
#include <string>

void TitleWindow(LPCSTR WindowTitle) {
	HWND WinTitle = FindWindowA(NULL, WindowTitle);
	if (IsWindow(WinTitle))
	{
		throw;
	}
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
	

	}
	else if (fdwReason == DLL_PROCESS_DETACH)
	{

	}

	return TRUE;
}
#include <windows.h>
#include <d3d11.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmdShow)
{
	D3D11CreateDeviceAndSwapChain(NULL,
		D3D_DRIVER_TYPE_REFERENCE,
		NULL,
		NULL,
		NULL,
		NULL,
		D3D11_SDK_VERSION,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL);

	MessageBox(NULL, "Hela Sukkar", "HI", S_OK);
}

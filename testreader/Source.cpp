#include <stdio.h>

extern "C"
{
	__declspec(dllexport) void DisplayHelloFromDLL()
	{
		printf("HHello from DLL !\n");
	}

	__declspec(dllexport) int add() {
		int a = 5;
		int b = 7;
		return a + b;
	}
}
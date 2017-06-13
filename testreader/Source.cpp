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
		int c = 15;
		return a + b;
	}
}
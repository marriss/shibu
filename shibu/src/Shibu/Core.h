#pragma once
#ifdef SB_PLATFORM_WINDOWS
	#ifdef SB_BUILD_DLL
		#define SHIBU_API __declspec(dllexport) 
	#else
		#define SHIBU_API __declspec(dllimport)
	#endif // SB_BUILD_DLL
#else
	#error SHIBU only supports windows for now! 
#endif
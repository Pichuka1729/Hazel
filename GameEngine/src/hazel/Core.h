#pragma once
#ifdef  HG_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API _declspec(dllexport)
	#else
		#define HAZEL_API _declspec(dllimport)

	#endif 
#else
	#error HAZEL ONLY SUPPORTS WINDOWS 
#endif 


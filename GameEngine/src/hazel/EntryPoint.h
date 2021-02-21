#pragma once
#include <iostream>
#ifdef HG_PLATFORM_WINDOWS
extern Hazel::Application*  Hazel::CreateApplication();
int main(int argc,char** argv)
{
	Hazel::Log::Init();
	Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	Hazel::Log::GetClientLogger()->info("Hello!");
	auto app = Hazel::CreateApplication();
	app->start();
	delete app;
	return 0;
	
}

#endif  
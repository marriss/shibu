#pragma once

#ifdef SB_PLATFORM_WINDOWS

extern Shibu::Application* Shibu::CreateApplication(); 

int main(int argc, char** argv)
{
	auto app = Shibu::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Shibu only supports windows for now!
#endif // HZ_PLATFORM_WINDOWS

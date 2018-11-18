#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Logging initialized!");
	HZ_INFO("Hello, I'm the app!");
	auto app = Hazel::CreateApplication();	// gets the application from the client
	app->Run();
	delete app;

}

#else
	#error Only windows is supported!
#endif
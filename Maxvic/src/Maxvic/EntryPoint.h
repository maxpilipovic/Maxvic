#pragma once

#ifdef MV_PLATFORM_WINDOWS

extern Maxvic::Application* Maxvic::CreateApplication();

int main(int argc, char** argv)

{
	Maxvic::Logger::Init();
	auto app = Maxvic::CreateApplication();
	app->Run();
	delete app;
}

#endif
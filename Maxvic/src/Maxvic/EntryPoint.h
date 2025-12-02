#pragma once

#ifdef MV_PLATFORM_WINDOWS

extern Maxvic::Application* Maxvic::CreateApplication();

int main(int argc, char** argv)

{
	auto app = Maxvic::CreateApplication();
	app->Run();
	delete app;
}

#endif
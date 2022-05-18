#pragma once
#include "Core.h"

namespace Shibu {
	class SHIBU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


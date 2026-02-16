#pragma once

#include "Maxvic/Layer.h"

namespace Maxvic
{
	class MAXVIC_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		virtual ~ImGuiLayer();

		void OnAttach() override;
		void OnDetach() override;
		void OnUpdate() override;
		void OnEvent(Event& e) override;
	private:
		float m_Time = 0.0f;
	};

}
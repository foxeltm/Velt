#include "lvpch.h"
#include "ImGuiLayer.h"
#include "Log.h"

namespace Lavendel {
	ImGuiLayer::ImGuiLayer() : Layer("ImGuiLayer"), m_DemoWidget("Lavendel Demo")
	{
	}
	
	ImGuiLayer::~ImGuiLayer() 
	{
	}

	void ImGuiLayer::OnAttach()
	{
		LV_CORE_INFO("ImGuiLayer attached");
	}

	void ImGuiLayer::OnDetach()
	{
		LV_CORE_INFO("ImGuiLayer detached");
	}

	void ImGuiLayer::OnEvent(Event& event)
	{
		// Handle ImGui input events
		ImGuiIO& io = ImGui::GetIO();
		// Event handling can be extended based on specific event types
	}

	void ImGuiLayer::OnUpdate()
	{
		// Render demo widget
		m_DemoWidget.OnRender();
	}

	void ImGuiLayer::Begin()
	{
		m_Renderer.Begin();
	}

	void ImGuiLayer::End()
	{
		m_Renderer.End();
	}
}
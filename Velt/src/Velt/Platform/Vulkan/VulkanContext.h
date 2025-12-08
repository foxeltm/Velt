#pragma once
#include "vtpch.h"
#include "Velt/Core/Core.h"
#include "Velt/Platform/Vulkan/VulkanDevice.h"
#include "Velt/Renderer/RenderContext.h"
#include "Velt/Platform/Vulkan/VulkanSwapchain.h"
#include "Velt/Platform/Vulkan/VulkanPipeline.h"


namespace Velt::Renderer::Vulkan
{

	class VELT_API VulkanContext : public RendererContext
	{
	public:
		VulkanContext();
		virtual ~VulkanContext() = default;
		virtual void Init() override;
		static std::weak_ptr<VulkanDevice> getDevice() { return s_Device; }
		static std::weak_ptr<VulkanSwapchain> getSwapchain() { return s_Swapchain; }
		static std::weak_ptr<VulkanPipeline> getPipeline() { return s_Pipeline; }
		
	private:
		static VulkanDevice* s_Device = nullptr;
		static VulkanSwapchain* s_Swapchain = nullptr;
		static VulkanPipeline* s_Pipeline = nullptr;
	};
}

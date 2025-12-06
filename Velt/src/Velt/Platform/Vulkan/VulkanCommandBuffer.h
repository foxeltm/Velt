#include "vtpch.h"
#include "Velt/Renderer/RenderCommandBuffer.h"

namespace Velt::Renderer::Vulkan
{
	class VELT_API VulkanCommandBuffer : public RenderCommandBuffer
	{
	public:
		VulkanCommandBuffer(VkCommandBuffer commandBuffer)
			: m_CommandBuffer(commandBuffer) {}
		inline VkCommandBuffer get() const { return m_CommandBuffer; }
	private:
		VkCommandBuffer m_CommandBuffer;
	};
}
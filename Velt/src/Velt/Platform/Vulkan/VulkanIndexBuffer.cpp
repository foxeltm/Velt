
#include "Core/Core.h"
#include "VulkanIndexBuffer.h"
#include "VulkanContext.h"
#include <vulkan/vulkan.h>

namespace Velt::Renderer::Vulkan
{

	void VulkanIndexBuffer::Bind() const
	{
		VT_PROFILE_FUNCTION();
		VT_CORE_TRACE("Bind VulkanIndexBuffer");

	}


	VulkanIndexBuffer::VulkanIndexBuffer(u64 size)
	{
		VT_PROFILE_FUNCTION();
		VT_CORE_TRACE("VulkanIndexBuffer constucted");
		CreateBuffer(nullptr, size);
	}

	VulkanIndexBuffer::VulkanIndexBuffer(void* data, u64 size)
	{
		VT_PROFILE_FUNCTION();
		VT_CORE_TRACE("VulkanIndexBuffer constucted");
		CreateBuffer(data, size);
	}

	VulkanIndexBuffer::~VulkanIndexBuffer()
	{
		VT_PROFILE_FUNCTION();
		VT_CORE_TRACE("VulkanIndexBuffer destucted");
	}

	void VulkanIndexBuffer::CreateBuffer(void* data, u64 size, u64 offset = 0)
	{
		VT_PROFILE_FUNCTION();
		VT_CORE_TRACE("VulkanIndexBuffer created");
		auto m_Device = VulkanContext::getDevice();

		VkBuffer stagingBuffer;
		VkDeviceMemory stagingBufferMemory;
		
		m_Device->createBuffer(
			size,
			VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
			VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
			stagingBuffer,
			stagingBufferMemory
		); 

		void* mappedData = nullptr;
		vkMapMemory(
			*m_Device->device(),
			stagingBufferMemory,
			0,
			size,
			0,
			&mappedData
		);

		memcpy(mappedData, data, static_cast<size_t>(size));
		vkUnmapMemory(*m_Device->device(), stagingBufferMemory);
	}


}
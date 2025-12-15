
#include "Core/Core.h"
#include "VulkanIndexBuffer.h"
#include "VulkanContext.h"
#include <vulkan/vulkan.h>

namespace Velt::Renderer::Vulkan
{

	void VulkanIndexBuffer::Bind() const
	{

	}


	VulkanIndexBuffer::VulkanIndexBuffer(void* data, u64 size)
		: m_Size(size)
	{

	
	}

	void VulkanIndexBuffer::CreateBuffer(void* buffer, u64 size, u64 offset = 0)
	{
		VkBuffer stagingBuffer;
		VkDeviceMemory stagingBufferMemory;
		CreateBuffer
	}



	VulkanIndexBuffer::VulkanIndexBuffer(u64 size)
	{

	}

	VulkanIndexBuffer::VulkanIndexBuffer(void* data, u64 size)
	{

	}

	VulkanIndexBuffer::~VulkanIndexBuffer()
	{

	}

}
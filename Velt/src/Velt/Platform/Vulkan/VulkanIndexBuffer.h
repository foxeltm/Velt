#include "Core/Core.h"
#include "Renderer/IndexBuffer.h"

namespace Velt::Renderer::Vulkan
{

	class VELT_API VulkanIndexBuffer : public IndexBuffer
	{
	public:
		VulkanIndexBuffer(u64 size);
		VulkanIndexBuffer(void* data, u64 size = 0);
		virtual ~VulkanIndexBuffer();


		virtual void CreateBuffer(void* buffer, u64 size, u64 offset = 0) override;
		virtual void Bind() const override;


		virtual u32 GetCount() const override { return m_Size / sizeof(u32); };
		virtual u64 GetSize() const override { return m_Size; };
		virtual u32 GetRendererID() const override {};

	private:

		
		u64 m_Size = 0;

	};
}
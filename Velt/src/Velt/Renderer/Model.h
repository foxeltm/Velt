#pragma once
#include "Velt/Core/Core.h"
#include <vector>

namespace Velt::Renderer
{
	class VELT_API Model
	{
	public:
		virtual ~Model() = default;

		virtual void Bind(void* commandBuffer) = 0;
		virtual void Draw(void* commandBuffer) = 0;
		virtual u32 GetVertexCount() const = 0;

		static Ref<Model> Create(void* device, const void* vertices, size_t vertexSize, u32 vertexCount);
	};
}


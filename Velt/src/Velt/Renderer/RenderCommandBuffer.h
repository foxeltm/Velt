#pragma once

#include "Velt/Core/Core.h"
#include "Pipeline.h"

namespace Velt::Renderer {

	class RenderCommandBuffer
	{
	public:
		virtual ~RenderCommandBuffer() = default;

		virtual void Begin() = 0;
		virtual void End() = 0;
		virtual void Submit() = 0;

		virtual float GetExecutionGPUTime(u32 frameIndex, u32 queryIndex = 0) const = 0;

		virtual u32 BeginTimestampQuery() = 0;
		virtual void EndTimestampQuery(u32 queryID) = 0;

		static Ref<RenderCommandBuffer> Create(u32 count = 0, const std::string& debugName = "");
		static Ref<RenderCommandBuffer> CreateFromSwapChain(const std::string& debugName = "");
	};

}
#pragma once

class CVirtualBase {
public:
	virtual ~CVirtualBase() {
	}
};
static_assert(sizeof(CVirtualBase) == 0x4);
﻿#pragma once

#include <vector>
#include <cstdint>

#include "Request.h"
#include "Response.h"

class InitRequest : public Request
{
public:
	InitRequest(uint8_t request_sequence_number, uint8_t sp_unit);
	std::vector<uint8_t> serialize() const override;
	std::unique_ptr<Response> deserialize(const std::vector<uint8_t>& data) const override;
};

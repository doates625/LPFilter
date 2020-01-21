/**
 * @file LPFilter.h
 * @brief Class for first-order low-pass filters
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once
#include <LTIFilter.h>

/**
 * Class Declaration
 */
class LPFilter : public LTIFilter
{
public:
	LPFilter(float fc, float fs);
}

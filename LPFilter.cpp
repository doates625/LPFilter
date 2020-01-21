/**
 * @file LPFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include <LPFilter.h>

/**
 * @brief Constructor
 * @param fc Cutoff frequency
 * @param fs Sample frequency
 */
LPFilter::LPFilter(float fc, float fs);
{
	// Allocate data
	const uint8_t A = 2; float a[A];
	const uint8_t B = 1; float b[B];

	// Assign coefficients
	float alpha = 1.0f / (1.0f + 2.0f * M_PI * fc / fs);
	a[0] = 1.0f;
	a[1] = -alpha;
	b[0] = 1.0f - alpha;

	// Construct filter
	(*this) = LTIFilter(A, a, B, b);
}

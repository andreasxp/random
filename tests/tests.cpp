#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest/doctest.h>
#include <zh/random.hpp>

TEST_CASE("Unit.SystemHasRandomDevice") {
	zh::thread_safe_random_device rd;
	
	// If the system does not have random_device, rd always generates the same value (usually 0)
	CHECK(rd() != rd());
}
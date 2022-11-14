#include <gtest/gtest.h>
#include "template_mock.hpp"

// Demonstrate some basic assertions.
TEST(DefaultTestSuite, ProcessEvent_initializeRequestAfterConstruction_stateInitialized)
{
    /* Arrange */
    bool ret;
    StateMachine sm;

    /* Act */
    sm.ProcessEvent(EVENT_INITIALIZE_REQUEST);

    /* Assert */
    EXPECT_EQ(sm.getIncomingEvent(), EVENT_INITIALIZE_REQUEST) << "Temporary test - only adjust incoming event.";
}
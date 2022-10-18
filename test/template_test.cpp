#include <gtest/gtest.h>
#include "template_mock.hpp"

// Demonstrate some basic assertions.
TEST(TemplateTest, StatemachineAssertions) {
  ////////////Arrange////////////
  MockStateMachine mock_sm;
  //EXPECT_CALL(object, function(Args));
  EXPECT_CALL(mock_sm, ProcessEvent(EVENT_INITIALIZE_REQUEST)); 

  ////////////Act////////////
  //TODO

  ////////////Assert////////////
  EXPECT_EQ(1+1, 2) << "some really fancy calculation here";
}
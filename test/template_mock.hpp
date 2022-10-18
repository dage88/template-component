#include "gmock/gmock.h"
#include "../template_statemachine.hpp"

class MockStateMachine : public StateMachine {
 public:
 //MOCK_METHOD(ReturnType, MethodName, (Args...), (Specs...));
  MOCK_METHOD(bool, ProcessEvent, (event_t event), (override));
};
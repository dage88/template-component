#include "template_statemachine.hpp"
#include <iostream>

int main(){
    StateMachine    sm;
    event_t         event = EVENT_INITIALIZE_REQUEST;

    sm.ProcessEvent(event);

    while(true);

    std::cout << "main end.";
    return 0;
}
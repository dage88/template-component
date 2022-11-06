#include "template_statemachine.hpp"
#include <iostream>

int main(){
    StateMachine    sm;
    event_t         event = EVENT_INITIALIZE_REQUEST;
    int counter = 0;

    sm.ProcessEvent(event);

    while(true)
    {
        counter++;
        if (counter==0)
        {
            std::cout << "Overflow.";
        }
    };

    std::cout << "main end.";
    return 0;
}
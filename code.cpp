#include "code.hpp"

int main(){
    StateMachine sm;
    event_t event = OPEN_REQUEST;
    sm.ProcessEvent(event);
    sm.ProcessEvent(event);
    event = CLOSE_REQUEST;
    sm.ProcessEvent(event);
    sm.ProcessEvent(event);
    return 0;
}
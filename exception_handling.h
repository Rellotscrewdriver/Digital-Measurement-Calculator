#ifndef EXCEPTION_HANDLING_H
#define EXCEPTION_HANDLING_H
#include "declarations.h"

class Exception_Handling : public declarations {
    public:
        void check_if_typed_string();
        void check_if_typed_string_and_invaild_number();
        string error_message = "Inputs Can't be Negative or Zero\n\n";
};

#endif

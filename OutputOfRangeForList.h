#ifndef EXCEPTION_OOTPUT_OF_RANGE_FOR_LIST_H_ 
#define EXCEPTION_OOTPUT_OF_RANGE_FOR_LIST_H_

#include "stdfx.h"

class OutputOfRangeForList : public std::exception
{
public:

	const char* what() const noexcept;
};

#endif  // EXCEPTION_OOTPUT_OF_RANGE_FOR_LIST_H_ 

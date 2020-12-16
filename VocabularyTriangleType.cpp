#include "VocabularyTriangleType.h"

std::string VocabularyTriangleType::enumTriangleTypeToString(TriangleType type)
{
	switch (type) {
	case TRINAGLE_TYPE_EQUILATERAL:
		return std::string("TRINAGLE_TYPE_EQUILATERAL ");
		
	case TRINAGLE_TYPE_ISOSCELES_RIGHT_ANGLED:
		return std::string("TRINAGLE_TYPE_ISOSCELES_RIGHT_ANGLED");
	case TRINAGLE_TYPE_ISOSCELES:
		return std::string("TRINAGLE_TYPE_ISOSCELES");
	case TRINAGLE_TYPE_RIGHT_ANGLED:
		return std::string("TRINAGLE_TYPE_RIGHT_ANGLED");
	case TRINAGLE_TYPE_ARBITRARY:
		return std::string("TRINAGLE_TYPE_ARBITRARY");
	default:
		return std::string("Unknown type");
	}
}
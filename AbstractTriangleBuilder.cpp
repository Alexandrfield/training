#include "AbstractTriangleBuilder.h"

AbstractTriangleBuilder::AbstractTriangleBuilder(typePointer<AbstractTriangleBuilder> builder) : next_builder_(builder) {}


typePointer<AbstractTriangle> AbstractTriangleBuilder::buildTriangle(const typePointer<TriangleParameters>& triangle)
{
    try {
        return create(triangle);
    }
    catch (const ObjectIsCanNotCreated& exception) {

        if (this->next_builder_) {
            return this->next_builder_->buildTriangle(triangle);
        }

        return typePointer<AbstractTriangle>();
    }

    return typePointer<AbstractTriangle>();
}

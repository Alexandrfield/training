#include "AbstractTriangleBuilder.h"

AbstractTriangleBuilder::AbstractTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> builder) : next_builder_(builder) {}


std::unique_ptr<AbstractTriangle> AbstractTriangleBuilder::buildTriangle(const std::shared_ptr<TriangleParameters>& triangle)
{
    try {
        return create(triangle);
    }
    catch (const ObjectIsCanNotCreated& exception) {

        if (this->next_builder_) {
            return this->next_builder_->buildTriangle(triangle);
        }

        return std::unique_ptr<AbstractTriangle>();
    }

    return std::unique_ptr<AbstractTriangle>();
}

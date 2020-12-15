#include "AbstractTriangleBuilder.h"

AbstractTriangleBuilder::AbstractTriangleBuilder(std::unique_ptr<AbstractTriangleBuilder>& builder) : next_builder_(std::move(builder)) {}
AbstractTriangleBuilder::AbstractTriangleBuilder() : next_builder_(nullptr) {}

std::unique_ptr<AbstractTriangle> AbstractTriangleBuilder::buildTriangle(const std::shared_ptr <Point2D>& vertexA, 
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC)
{
    try {
        return create(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {

        if (this->next_builder_) {
            return this->next_builder_->buildTriangle(vertexA, vertexB, vertexC);
        }

        return std::unique_ptr<AbstractTriangle>();
    }

    return std::unique_ptr<AbstractTriangle>();
}
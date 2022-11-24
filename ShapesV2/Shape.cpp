#include "Shape.h"

Shape::Shape()
{

}

Shape::Shape(const std::string& name){
    _name = name;
}

void Shape::setName(const std::string& name){
    _name = name;
}

const std::string& Shape::getName() const{
    return _name;
}

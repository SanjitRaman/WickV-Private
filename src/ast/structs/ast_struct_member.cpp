#include "ast/ast_struct_member.hpp"

void StructMember::EmitRISC(std::ostream &stream, Context &context) const {
    
    
}
void StructMember::EmitRISC(std::ostream &stream, Context &context,
                              std::string destReg) const
{
}
entity_type StructMember::getEntity() const { }

std::string StructMember::getId() const { 
    //TODO: Implement a class for struct_declarator_list
    //which inherits from NodeList and has a custom getId
    return struct_declarator_list_->getId(); 
}

void StructMember::Print(std::ostream &stream) const
{
}

data_type StructMember::getType() const {
    return specifier_qualifier_list_->getType();
 } //Shouldn't need one with context
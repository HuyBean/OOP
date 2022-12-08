#ifndef PARSER_FACTORY
#define PARSER_FACTORY

#include "Entity/Object.h"
#include "IParsable.h"

#include <map>

class ParserFactory : public Object
{
private:
    map<string, IParsable *> _container;

public:
    void registerWith(IParsable *parser);
    IParsable *create(string type);
    string toString();
};

void ParserFactory::registerWith(IParsable *parser)
{
    _container.insert({parser->parsedObjectName(), parser});
}

IParsable *ParserFactory::create(string type)
{
    return _container[type];
}

#endif
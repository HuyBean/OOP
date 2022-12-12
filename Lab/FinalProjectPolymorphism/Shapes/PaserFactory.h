#pragma once
#include "Object.h"
#include "IParsable.h"


// Let use dependency injection
class ParserFactory
{
private:
    map<string, IParsable *> _container; // A container for all the dependencies injection
public:
    void registerWith(IParsable *parser)
    { // Do the injection here
        _container.insert(
            {parser->parsedObjectName(), parser});
    }

    IParsable *create(string type)
    {
        return _container[type]; // Ask container to resolve the needed type
    }
};
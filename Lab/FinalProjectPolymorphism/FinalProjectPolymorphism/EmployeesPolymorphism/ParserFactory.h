#ifndef PARSER_FACTORY
#define PARSER_FACTORY

#include "Object.h"
#include "IParsable.h"

#include <map>


// Let use dependency injection
class ParserFactory: public Object
{
private:
    map<string, IParsable *> _container; // A container for all the dependencies injection
public:
    void registerWith(IParsable *parser);
    IParsable *create(string type);
    string toString();
};

#endif
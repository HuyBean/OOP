#ifndef PARSER_FACTORY_RENAME
#define PARSER_FACTORY_RENAME

#include "Object.h"
#include "IParsable.h"

#include <map>


// Let use dependency injection
class ParserFactory
{
private:
    map<string, IParsable *> _container; // A container for all the dependencies injection
public:
    void registerWith(IParsable *parser);
    IParsable *create(string type);
};

#endif
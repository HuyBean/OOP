#ifndef UTILS
#define UTILS

#include <vector>
#include <string>

using namespace std;

namespace Utils
{
    class String
    {
    public:
        static vector<string> split(string haystack, string needle);
    };
}
#endif
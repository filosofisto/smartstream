//
// Created by TER81646 on 09/05/2019.
//

#include "SmartStream.h"

SmartStream::SmartStream(const string& filename)
{
    out.open(filename);
}

SmartStream::~SmartStream()
{
    out.close();
}

SmartStream &SmartStream::operator<<(ostream &(*pfun)(ostream &)) {
    pfun(out);
    pfun(cout);

    return *this;
}

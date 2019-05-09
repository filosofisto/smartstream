//
// Created by TER81646 on 09/05/2019.
//

#ifndef SMARTSTREAM_SMARTSTREAM_H
#define SMARTSTREAM_SMARTSTREAM_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SmartStream {
public:
    explicit SmartStream(const string& filename);
    virtual ~SmartStream();

    SmartStream& operator<<(ostream& (*pfun)(ostream&));

    ofstream out;
private:

};

template <class T>
inline SmartStream& operator<<(SmartStream& stream, T val)
{
    cout << val;
    stream.out << val;

    return stream;
}

#endif //SMARTSTREAM_SMARTSTREAM_H

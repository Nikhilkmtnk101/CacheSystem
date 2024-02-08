#ifndef Exceptions_hpp
#define Exceptions_hpp
#include <bits/stdc++.h>

class StorageFullException: public exception{
    const char * what () const throw () {
        return "Storage is Full";
    }
};

class KeyNotFoundException: public exception{
    const char * what () const throw () {
        return "Key does not exist";
    }
};

#endif
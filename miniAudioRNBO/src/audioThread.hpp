//
//  audioThread.hpp
//  ofMiniRNBO_vr2
//
//  Created by David Rafferty on 1/24/24.
//

#ifndef audioThread_hpp
#define audioThread_hpp

#include <stdio.h>

#include "ofMain.h"
#include "RNBO.h"

#ifdef __APPLE__
    #define MA_NO_RUNTIME_LINKING
#endif

#define MA_DEBUG_OUTPUT

#define MINIAUDIO_IMPLEMENTATION

class audioThreaded: public ofThread {

public:

    RNBO::CoreObject rnboObject;
    void setup();
    void getRNBO();
    void setRNBO(int y);
    void threadedFunction();
   
};

#endif /* audioThread_hpp */

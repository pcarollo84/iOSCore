//
//  iOSCore.h
//  iOSCore
//
//  Created by Paolo on 04/10/2016.
//  Copyright © 2016 Paolo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for iOSCore.
FOUNDATION_EXPORT double iOSCoreVersionNumber;

//! Project version string for iOSCore.
FOUNDATION_EXPORT const unsigned char iOSCoreVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <iOSCore/PublicHeader.h>

#define LOG_LEVEL_DEF ddLogLevel
#define LOG_ASYNC_ENABLED YES

#import <CocoaLumberjack/CocoaLumberjack.h>

#ifdef DEBUG
    static const int ddLogLevel = DDLogLevelVerbose;
#else
    static const int ddLogLevel = DDLogLevelError;
#endif


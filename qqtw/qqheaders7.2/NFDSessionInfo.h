//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface NFDSessionInfo : NSObject
{
    unsigned int _sessionID;
    NSData *_cookie;
}

+ (id)sessionInfoWithID:(int)arg1 cookie:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;

@end


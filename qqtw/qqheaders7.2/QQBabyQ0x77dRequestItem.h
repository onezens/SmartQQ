//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSData;

@interface QQBabyQ0x77dRequestItem : SAMRequestItem
{
    NSData *_cookie;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
- (char *)getRequestBuffer;
- (id)initWithCookie:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

@end


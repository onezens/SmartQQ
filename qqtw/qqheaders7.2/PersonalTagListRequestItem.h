//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface PersonalTagListRequestItem : SAMRequestItem
{
    unsigned long long _uin;
    unsigned int _digest;
}

- (char *)getRequestBuffer;
- (id)initWithUIN:(unsigned long long)arg1 digest:(unsigned int)arg2;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

@end


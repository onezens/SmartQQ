//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface DiscussGroupListReqItem : SAMRequestItem
{
    unsigned int _subcmd;
    unsigned long long _otherUin;
}

- (char *)getRequestBuffer;
- (id)init;
- (id)initWithSubcmd:(unsigned int)arg1 otherUin:(unsigned long long)arg2;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(readonly, nonatomic) unsigned long long otherUin; // @synthesize otherUin=_otherUin;
- (id)serviceCmd;
@property(readonly, nonatomic) unsigned int subcmd; // @synthesize subcmd=_subcmd;

@end


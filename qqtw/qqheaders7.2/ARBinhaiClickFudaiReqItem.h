//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString;

@interface ARBinhaiClickFudaiReqItem : SAMRequestItem
{
    unsigned int _clickCount;
    NSString *_actId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *actId; // @synthesize actId=_actId;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
- (char *)getRequestBuffer;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface QQActivateFriendsReadReportRequestItem : SAMRequestItem
{
    NSArray *_reportInfos;
}

- (void).cxx_destruct;
- (char *)getRequestBuffer;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(retain, nonatomic) NSArray *reportInfos; // @synthesize reportInfos=_reportInfos;
- (id)serviceCmd;

@end

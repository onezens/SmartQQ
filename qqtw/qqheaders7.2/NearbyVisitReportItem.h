//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface NearbyVisitReportItem : SAMRequestItem
{
    NSArray *_visitList;
}

- (void).cxx_destruct;
- (char *)getRequestBuffer;
- (id)init;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;
@property(retain, nonatomic) NSArray *visitList; // @synthesize visitList=_visitList;

@end

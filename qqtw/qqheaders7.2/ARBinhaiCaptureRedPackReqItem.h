//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString, TencentLBSLocation;

@interface ARBinhaiCaptureRedPackReqItem : SAMRequestItem
{
    unsigned int _redPackCount;
    NSString *_actId;
    TencentLBSLocation *_lbsInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *actId; // @synthesize actId=_actId;
- (char *)getRequestBuffer;
@property(retain, nonatomic) TencentLBSLocation *lbsInfo; // @synthesize lbsInfo=_lbsInfo;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(nonatomic) unsigned int redPackCount; // @synthesize redPackCount=_redPackCount;
- (id)serviceCmd;

@end


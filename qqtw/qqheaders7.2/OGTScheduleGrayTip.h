//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OGTOperationBaseGrayTip.h"

@class NSMutableDictionary;

@interface OGTScheduleGrayTip : OGTOperationBaseGrayTip
{
    double _maxTimeInterval;
    unsigned long long _maxUserCount;
    NSMutableDictionary *_localDic;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)decreaseSayHelloCountByUin:(id)arg1;
- (void)increaseSayHelloCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1;
- (_Bool)isSceneTypeRight;
- (_Bool)isTriggerTimeAndUserLimit;
- (void)loadDataWithTask:(id)arg1;
- (void)receivedC2CMessage:(id)arg1;
- (void)registerNotification;
- (void)setLocalTipConfig:(id)arg1;
- (_Bool)shouldShowGrapTip;

@end

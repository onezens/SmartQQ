//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface PullRedPointReqModel : QQModel
{
    NSString *_taskID;
    unsigned long long _lastPullSeq;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastPullSeq; // @synthesize lastPullSeq=_lastPullSeq;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;

@end


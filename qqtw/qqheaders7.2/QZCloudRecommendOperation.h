//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

@interface QZCloudRecommendOperation : QZBaseOperation
{
    long long _requestID;
}

- (void)cancelJob:(_Bool)arg1;
- (void)execute;
- (void)handleFailWithCount:(long long)arg1;
- (void)handleFailure:(id)arg1;
- (void)handleSuccess;
- (id)operationDescription;
- (id)titleText;

@end


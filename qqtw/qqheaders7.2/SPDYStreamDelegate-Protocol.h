//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPDYStream;

@protocol SPDYStreamDelegate <NSObject>
- (void)streamCanceled:(SPDYStream *)arg1;

@optional
- (void)streamClosed:(SPDYStream *)arg1;
- (void)streamDataAvailable:(SPDYStream *)arg1;
- (void)streamDataFinished:(SPDYStream *)arg1;
@end


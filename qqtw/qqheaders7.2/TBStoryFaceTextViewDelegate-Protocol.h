//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TBStoryFaceTextViewDelegate <NSObject>

@optional
- (void)didCancelKF;
- (void)didKFHide;
- (void)didKFInputWithHeight:(double)arg1;
- (void)didKFShowWithHeight:(double)arg1;
- (void)didShowFacePanel;
- (void)shouldSendWithMsg:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQVIPFunctionFileUploadDelegate.h"

@class NSString;

@interface QQVIPLuaTools : NSObject <IQQVIPFunctionFileUploadDelegate>
{
}

+ (id)CFAbsoluteTimeGetCurrent;
+ (struct CGAffineTransform)CGAffineTransformMakeRotation:(double)arg1;
+ (struct CGAffineTransform)CGAffineTransformMakeScale:(double)arg1 and:(double)arg2;
+ (struct CGAffineTransform)CGAffineTransformRotate:(struct CGAffineTransform)arg1 angle:(double)arg2;
+ (struct CGAffineTransform)CGAffineTransformScale:(struct CGAffineTransform)arg1 sx:(double)arg2 sy:(double)arg3;
+ (_Bool)CGRectContains:(struct CGRect)arg1 point:(struct CGPoint)arg2;
+ (_Bool)DataReportOpKey643:(id)arg1 opName:(id)arg2 opEnter:(id)arg3 opResult:(id)arg4 reserve:(id)arg5;
+ (_Bool)DataReportOpKey644:(id)arg1 opType:(id)arg2 opName:(id)arg3 opEnter:(id)arg4 opResult:(id)arg5 reserve:(id)arg6;
+ (void)animateWithDuration:(double)arg1 animationTarget:(id)arg2 animationSelector:(SEL)arg3 completeTarget:(id)arg4 completeSetector:(SEL)arg5;
+ (void)backgroundMallPopToSummaryVC;
+ (double)getCACurrentMediaTime;
+ (struct CATransform3D)getCATransform3D;
+ (id)getCurrentUserModel;
+ (id)getParmamFromURLString:(id)arg1;
+ (id)getSettingViewTextInfoColor;
+ (struct CGSize)getSizeWithFont:(id)arg1 font:(id)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (void *)kCAFillModeForwardsAddr;
+ (void *)kCAMediaTimingFunctionEaseInEaseOutAddr;
+ (void *)kCATransitionFadeAddr;
+ (void)postUIANotification:(id)arg1;
+ (void)setTargetOffsetY:(void *)arg1 y:(double)arg2;
+ (id)shareInstance;
+ (void)viewDecripitions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


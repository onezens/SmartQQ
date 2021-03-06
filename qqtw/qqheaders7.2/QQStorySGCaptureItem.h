//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBShareGroupJumpDelegate.h"

@class NSString, UIImageView;

@interface QQStorySGCaptureItem : UIView <TBShareGroupJumpDelegate>
{
    UIImageView *_backgroundImageView;
    NSString *_groupID;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)dealloc;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 groupID:(id)arg2;
- (void)openVideoCapture;
- (void)opneStoryCaptureView;
- (void)opneStoryVideoSelect;
- (void)shareGroupJump:(id)arg1 didFinishAddVideo:(id)arg2;
- (void)shareGroupJumpDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZVideoFeedCommStateView.h"

@class UIImageView, UIView;

@interface QZFeedLiveVideoStateView : QZVideoFeedCommStateView
{
    UIImageView *_liveEndBgView;
    unsigned long long _currentState;
    UIView *_enterBubbleView;
    _Bool _alwaysHideDurationLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysHideDurationLabel; // @synthesize alwaysHideDurationLabel=_alwaysHideDurationLabel;
- (void)createEnterRoomBubbleView;
- (void)createLiveEndView;
- (void)dealView:(id)arg1 Animated:(_Bool)arg2 isShow:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteEnterRoomBubbleView;
- (void)deleteLiveEndBgView;
- (void)didMoveToWindow;
- (void)enterBubbleViewDisAppear;
- (void)hideLiveEndView;
- (void)setDurationLabelHidden:(_Bool)arg1;
- (void)setEnterRoomBubbleViewShow:(_Bool)arg1;
- (void)setFeedLiveInfoViewsHidden:(_Bool)arg1;
- (void)setLiveEndView:(_Bool)arg1;
- (void)setState:(unsigned long long)arg1;

@end


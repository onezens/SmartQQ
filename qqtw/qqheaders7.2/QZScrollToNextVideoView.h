//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface QZScrollToNextVideoView : UIView
{
    UIView *_bgView;
    UIImageView *_loadingView;
    unsigned long long _mode;
    id _delegate;
}

- (void).cxx_destruct;
- (void)cancelAnimation;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)initWithMode:(unsigned long long)arg1;
- (void)onPlayNextVideo:(id)arg1;
- (void)playNextVideo;
- (void)startAnimation;

@end

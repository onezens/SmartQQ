//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVShowPanelLayout.h"

@interface QQGroupAVShowPanelLayout : QQAVShowPanelLayout
{
    unsigned long long _videoInfoCount;
    double _joinVideoButtHeight;
    id <GroupAVShowPanelLayoutDelegate> _delegate;
    struct CGRect _fullViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GroupAVShowPanelLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)frameForIndex:(int)arg1;
@property(nonatomic) struct CGRect fullViewFrame; // @synthesize fullViewFrame=_fullViewFrame;
- (struct CGRect)inviteFrameForIndex:(int)arg1;
@property(nonatomic) double joinVideoButtHeight; // @synthesize joinVideoButtHeight=_joinVideoButtHeight;

@end


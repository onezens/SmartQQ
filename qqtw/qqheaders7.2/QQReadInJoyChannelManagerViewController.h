//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class NSArray, NSMutableArray, UIScrollView, UIView;

@interface QQReadInJoyChannelManagerViewController : QQViewController
{
    UIScrollView *_scrollView;
    UIView *_frameView;
    UIView *_selectedView;
    NSMutableArray *_myChannelItems;
    NSMutableArray *_moreChannelItems;
    UIView *_moreChannelTitleView;
    unsigned long long _area;
    NSMutableArray *_addChannelList;
    id <QQReadInJoyChannelManagerDelegate> _delegate;
    unsigned int _currentChannelId;
    unsigned int _lastAddChannelId;
    _Bool _showFriendCircle;
    NSArray *_channelList;
    unsigned long long channelCount;
    struct CGRect lastSelectFrame;
}

- (void)changeBackgroundColor:(id)arg1 selected:(_Bool)arg2;
- (void)clickArrowButton:(id)arg1;
- (void)dealloc;
- (id)friendCircleChannel;
- (id)getMyChannelList;
- (id)getOtherChannelList;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)jumToSingleViewWithChannelID:(unsigned int)arg1 channelName:(id)arg2 channelType:(unsigned int)arg3 insertChannelArticle:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) unsigned int lastAddChannelId; // @dynamic lastAddChannelId;
- (struct CGRect)layoutChannelView:(struct CGRect)arg1 myChannel:(_Bool)arg2;
- (struct CGRect)layoutMoreChannelTitleView:(struct CGRect)arg1;
- (void)layoutViews;
- (void)refreshAllChannelItems;
- (void)refreshMyChannelFromIndex:(int)arg1 ToIndex:(int)arg2;
- (void)removeNewTipsView:(id)arg1;
- (void)selectViewSetEnd;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) unsigned int currentChannelId; // @dynamic currentChannelId;
@property(nonatomic) id <QQReadInJoyChannelManagerDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool showFriendCircle; // @dynamic showFriendCircle;

@end


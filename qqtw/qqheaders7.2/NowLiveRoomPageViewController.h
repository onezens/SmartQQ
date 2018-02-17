//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPageViewController.h"

#import "NowLiveRoomDelegate.h"
#import "QQPageViewControllerDelegate.h"

@class BeforeRoomPerf, NSArray, NSDictionary, NSMutableDictionary, NSString, NowLiveRoomShareHelper, PGCStoryModel, PGCStoryShareButtonView;

@interface NowLiveRoomPageViewController : QQPageViewController <QQPageViewControllerDelegate, NowLiveRoomDelegate>
{
    PGCStoryShareButtonView *_shareButtonView;
    NowLiveRoomShareHelper *_shareHelper;
    NSArray *_roomList;
    NSMutableDictionary *_tempViewControllerCache;
    long long _prePageIndex;
    unsigned long long _preRoomId;
    _Bool _switchRooming;
    _Bool _isOrigNavHidden;
    _Bool _isOrigStatusBarHidden;
    long long _origStatusBarStyle;
    BeforeRoomPerf *_perf;
    int _openType;
    int _firstType;
    PGCStoryModel *_storyModel;
    NSDictionary *_h5ParamsDic;
    unsigned long long _enterance;
}

- (void).cxx_destruct;
- (_Bool)canDragClose;
- (_Bool)canTapClose;
- (void)closeRoom;
- (void)closeRoomAnimtated:(_Bool)arg1;
- (unsigned long long)currenTimeUInt64;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) unsigned long long enterance; // @synthesize enterance=_enterance;
- (void)exploreMore;
@property(nonatomic) int firstType; // @synthesize firstType=_firstType;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(retain, nonatomic) NSDictionary *h5ParamsDic; // @synthesize h5ParamsDic=_h5ParamsDic;
- (_Bool)handleGestureRecognizerWithPoint:(struct CGPoint)arg1;
- (id)initWithStoryModel:(id)arg1 openLiveRoomType:(int)arg2;
- (unsigned long long)numberOfPage;
- (void)onSetCurrentPage;
@property(nonatomic) int openType; // @synthesize openType=_openType;
- (void)pageDidChanged;
- (void)pageViewController:(id)arg1 didShowPage:(long long)arg2;
- (void)refreshModel;
- (void)reload;
- (void)reloadAndSetCurrentPage:(long long)arg1;
- (void)reloadContentViewController;
- (void)requestRoomList;
@property(retain, nonatomic) PGCStoryModel *storyModel; // @synthesize storyModel=_storyModel;
- (void)shareToQQ:(id)arg1;
- (_Bool)statusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchRoom;
- (id)viewControllerForPage:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

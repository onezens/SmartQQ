//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZFeedVideoEventFrequencyControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, QZFeedVideoEventFrequencyController, UIScrollView, UITableViewCell;

@interface QZFeedVideoPlayRightManager : NSObject <QZFeedVideoEventFrequencyControllerDelegate>
{
    struct CGPoint _contentOffset;
    unsigned long long _inertialDirection;
    double _scrollVelocity;
    double _lastTime;
    _Bool _isFingerOn;
    QZFeedVideoEventFrequencyController *_frequencyController;
    unsigned long long _updatePlayRightOpMask;
    _Bool _isScrolling;
    _Bool _isDisappear;
    _Bool _isResignActive;
    _Bool _isEnterBackground;
    _Bool _isDisableControlEvent;
    _Bool _hasRefreshEvent;
    id <QZFeedVideoPlayRightManagerDelegate> _delegate;
    unsigned long long _videoPlayScene;
    UIScrollView *_tableView;
    NSMutableArray *_currentCells;
    NSArray *_currentCellInfoModels;
    UITableViewCell *_havePlayRightCell;
    struct CGRect _actDisplayArea;
}

+ (id)playRightManagerWithPlayScene:(unsigned long long)arg1 tableView:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect actDisplayArea; // @synthesize actDisplayArea=_actDisplayArea;
- (void)addCell:(id)arg1;
- (id)buildFVCellInfoModels:(id)arg1;
- (void)calculatePlayRightCellBaseOnDirection:(id)arg1 currentPlayRightCellInfoModel:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)calculatePlayRightCellNormal:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)cellInfo:(id)arg1 checkPlayStateWithEvent:(unsigned long long)arg2 playRight:(_Bool)arg3;
- (_Bool)checkEventValid:(unsigned long long)arg1;
- (void)clear;
@property(retain, nonatomic) NSArray *currentCellInfoModels; // @synthesize currentCellInfoModels=_currentCellInfoModels;
@property(retain, nonatomic) NSMutableArray *currentCells; // @synthesize currentCells=_currentCells;
- (id)currentFeedVideoView;
- (id)currentPlayingFeedVideoView;
- (void)dealloc;
@property(nonatomic) __weak id <QZFeedVideoPlayRightManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedVideoView:(id)arg1 checkPlayStateWithEvent:(unsigned long long)arg2 playRight:(_Bool)arg3;
- (double)getScrollSpeed;
- (void)groupCellVideoViews:(id)arg1 cellInfo:(id)arg2 checkPlayStateWithEvent:(unsigned long long)arg3 playRight:(_Bool)arg4;
@property(nonatomic) __weak UITableViewCell *havePlayRightCell; // @synthesize havePlayRightCell=_havePlayRightCell;
- (id)initWithVideoPlayScene:(unsigned long long)arg1 tableView:(id)arg2 delegate:(id)arg3;
- (double)isFingerOn;
- (void)playRightEventHander:(unsigned long long)arg1 opMask:(unsigned long long)arg2;
- (void)qzSKStoreDidDisappear;
- (void)qzSKStoreWillAppear;
- (void)removeCell:(id)arg1 needStop:(_Bool)arg2;
- (void)resetPlayRight;
- (id)resortCellInfoModelsBaseOnDirection:(id)arg1;
- (unsigned long long)scrollDirection;
@property(nonatomic) __weak UIScrollView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long videoPlayScene; // @synthesize videoPlayScene=_videoPlayScene;
- (id)tryFindHavePlayRightCellInfoModel:(_Bool)arg1;
- (void)updateAllPlayRightWithEvent:(unsigned long long)arg1;
- (void)updateAllPlayRightWithEventInner:(unsigned long long)arg1;
- (void)updateCurrentPlayRightInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

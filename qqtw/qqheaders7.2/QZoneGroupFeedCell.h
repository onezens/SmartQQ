//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneFeedCell.h"

#import "QZContainerBaseScrollViewDelegate.h"
#import "QZContainerBaseScrollViewScrollDelegate.h"
#import "QZFeedCellDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, QZContainerBaseScrollView, QzoneFeedLayoutView, QzoneFeedModel, UIPageControl;

@interface QZoneGroupFeedCell : QzoneFeedCell <QZContainerBaseScrollViewDelegate, QZContainerBaseScrollViewScrollDelegate, UIScrollViewDelegate, QZFeedCellDelegate>
{
    unsigned long long _currentClickPage;
    QzoneFeedModel *_mainFeedModel;
    double _feedCellAlpha;
    QZContainerBaseScrollView *_baseScrollView;
    QzoneFeedLayoutView *_mainContentInfoView;
    QzoneFeedLayoutView *_recommActionInfoView;
    QzoneFeedLayoutView *_commentContentInfoView;
    QzoneFeedLayoutView *_specialCareRemindFootInfoView;
    QzoneFeedLayoutView *_multiAdvTypeFootInfoView;
    UIPageControl *_advFullScreenPageCtr;
    long long _type;
}

+ (double)heightWithFeedModel:(id)arg1;
+ (double)widthWithFeedModel:(id)arg1;
- (void).cxx_destruct;
- (void)cancelAllGroupFeedReportExceptIndexSet:(id)arg1;
- (void)cellExposure;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
- (void)clickToPage:(long long)arg1;
- (void)containerViewDidEndDraggingWithPage:(long long)arg1 oldPage:(long long)arg2 decelerate:(_Bool)arg3;
- (void)containerViewDidEndScrollingAnimation:(long long)arg1 oldPage:(long long)arg2;
- (id)currentLayoutInfoView;
- (void)didMoveToWindow;
- (id)feedModel;
- (struct CGRect)frameForCollectionView;
- (id)getCellMainContentInfoView:(id)arg1 index:(long long)arg2 withFrame:(struct CGRect)arg3;
- (id)getFeedModel:(unsigned long long)arg1;
- (id)getVisibleVideoViews;
- (id)getlayoutInfoViewAtPage:(unsigned long long)arg1;
- (void)groupFeedVisitReport:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutFeedView;
- (id)layoutModelInfoWithIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)moveToPage:(long long)arg1;
- (_Bool)needResponseAction:(unsigned long long)arg1;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)prepareForReuse;
- (void)refreshComment;
- (void)refreshContent:(id)arg1;
- (void)refreshLike:(id)arg1;
- (void)refreshSpecialCellInfo:(id)arg1 withParam:(id)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setContainerViewCurrentPage:(unsigned long long)arg1;
- (void)setFeedModel:(id)arg1;
- (void)setIndex:(long long)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (long long)shouldMoveToNextPage:(long long)arg1;
- (long long)videoPlayScene;
- (void)willDisplayGroupFeedCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


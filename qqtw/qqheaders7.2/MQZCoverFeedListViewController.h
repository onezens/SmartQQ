//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZCommonFeedListViewController.h"

@class MQZoneCoverHeaderView, MQZoneVideoManager, NSString, QUIActionSheet, UIView;

@interface MQZCoverFeedListViewController : MQZCommonFeedListViewController
{
    long long _uin;
    QUIActionSheet *_quiActionSheet;
    MQZoneCoverHeaderView *_headerView;
    long long _statusBarStytle;
    _Bool _isFirstLayout;
    _Bool _useFirstLayoutFeedList;
    long long _firstLayoutNum;
    _Bool _isPushVC;
    NSString *_nickname;
    UIView *_contentView;
    MQZoneVideoManager *_videoManager;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)advReportWithFeedModel:(id)arg1 requestId:(long long)arg2 position:(long long)arg3;
- (void)clearModelInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) __weak MQZoneCoverHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)init;
- (void)initNotificationObservers:(id)arg1;
- (_Bool)isShowingOperationWidget;
- (void)longPressCoverView:(id)arg1;
- (void)modifyStatusBarStyleIfNeed;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (long long)onMarkFaceNotify:(id)arg1;
- (long long)onPhotoModelChangedNotify:(id)arg1;
- (void)openVideoRecordController:(long long)arg1;
@property(retain, nonatomic) QUIActionSheet *quiActionSheet; // @synthesize quiActionSheet=_quiActionSheet;
- (void)reloadMoreData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) MQZoneVideoManager *videoManager; // @synthesize videoManager=_videoManager;
- (_Bool)shouldShowWidgetAI;
- (void)videoCommentReport:(id)arg1;
- (void)videoReportWithString:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "IFAViewHandlerDelegate.h"
#import "UIActionSheetDelegate.h"

@class FAModel, FAViewContainer, FAViewHandlerBase, NSString, NSURL, QQRichShortVideoPlayerNavigationView, UIWindow;

@interface FAVideoPlayerViewController : QQViewController <IFAViewHandlerDelegate, UIActionSheetDelegate>
{
    FAModel *_fileModel;
    FAViewContainer *_faViewContainer;
    FAViewHandlerBase *_curFAViewHandler;
    NSURL *_videoProxyURL;
    long long _lastStatusBarstyle;
    _Bool _bVideoMode;
    QQRichShortVideoPlayerNavigationView *_videoNavigationView;
    UIWindow *_maskView;
    int _sourceType;
    struct CGRect _aioRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect aioRect; // @synthesize aioRect=_aioRect;
- (void)close;
- (void)dealloc;
- (void)dismissViewConroller;
- (int)getFileSource;
- (id)getHoldViewController;
- (id)getHostView;
- (id)getViewContainer;
- (void)initCurrentFAViewHandler;
- (id)initWithFAModel:(id)arg1;
- (_Bool)isFromNearFile;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadFAView;
- (void)loadView;
- (long long)numofPages;
- (void)onFAViewClick;
- (void)onSwipeToPage:(long long)arg1;
- (void)removeMaskView;
- (void)setFullScreen:(_Bool)arg1;
- (void)setNavigationStyle:(_Bool)arg1;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void)setVideoNavigationHidden:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)showViewController:(id)arg1 push:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchHandler:(id)arg1;
- (void)updateFAViewWithData:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


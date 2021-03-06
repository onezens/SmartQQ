//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFileViewController.h"

#import "IFAViewContainerDelegate.h"
#import "IFAViewHandlerDelegate.h"
#import "IFAViewLinkActivityControllerDelegate.h"
#import "IFAViewSlideDataSource.h"
#import "UIActionSheetDelegate.h"

@class FAModel, FAViewContainer, FAViewHandlerBase, FAViewLinkActivityController, NSArray, NSMutableArray, NSString, QQRichShortVideoPlayerNavigationView, UIView;

@interface FAViewController : BaseFileViewController <IFAViewLinkActivityControllerDelegate, IFAViewContainerDelegate, IFAViewHandlerDelegate, IFAViewSlideDataSource, UIActionSheetDelegate>
{
    FAViewHandlerBase *_curFAViewHandler;
    FAViewContainer *_faViewContainer;
    NSMutableArray *_slidefileList;
    long long _curPage;
    long long _pageNum;
    _Bool _previewMode;
    UIView *_customTitleView;
    FAModel *_curFileModel;
    NSArray *_srcfileList;
    int _sourceType;
    _Bool _fromCreditLevel;
    _Bool _hideTitleNumber;
    _Bool _bInit;
    FAViewLinkActivityController *_menuCtrl;
    QQRichShortVideoPlayerNavigationView *_videoNavigationView;
}

- (void)FAHandleToastTips:(id)arg1;
- (void)FAViewLinkControllerDidAction:(int)arg1;
- (void)chaneViewOrientation;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissViewConroller;
- (void)fileterModelForImageSlide;
- (int)getFileSource;
- (id)getHandlerClassWithModel:(id)arg1;
- (id)getHoldViewController;
- (id)getHostView;
- (id)getPhotoAtPage:(long long)arg1;
- (id)getViewContainer;
- (void)initCurFAViewHandler;
- (void)initEvent;
- (id)initWithModel:(id)arg1 modelSource:(id)arg2;
- (_Bool)isFromNearFile;
- (_Bool)isSupportRightDragToGoBack;
- (void)leftButtonClick:(id)arg1;
- (void)loadFAView;
- (void)loadView;
- (long long)numofPages;
- (void)onFAViewClick;
- (void)onRightButtonClick:(id)arg1;
- (void)onSwipeToPage:(long long)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)reloadView;
- (void)setCustomControllerTitle:(id)arg1;
- (void)setDefaultNavigationHidden:(_Bool)arg1;
- (void)setFullScreen:(_Bool)arg1;
- (void)setNavigationBar;
- (void)setTopBarAppearance:(_Bool)arg1;
- (void)setVideoNavigationHidden:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)showViewController:(id)arg1 push:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchHandler:(id)arg1;
- (void)updateFAViewWithData:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(retain, nonatomic) FAModel *curFileModel; // @dynamic curFileModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fromCreditLevel; // @dynamic fromCreditLevel;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideTitleNumber; // @dynamic hideTitleNumber;
@property(nonatomic) _Bool previewMode; // @dynamic previewMode;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSArray *srcfileList; // @dynamic srcfileList;
@property(readonly) Class superclass;

@end


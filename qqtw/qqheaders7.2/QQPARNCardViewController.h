//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPACardViewController.h"

#import "QQPublicAccountHeaderViewDelegate.h"

@class NSString, TReactView, UIActivityIndicatorView, UILabel;

@interface QQPARNCardViewController : QQPACardViewController <QQPublicAccountHeaderViewDelegate>
{
    int _currentMsfApnNetworkState;
    _Bool _rnViewCreateError;
    _Bool _hasVCAppear;
    TReactView *_rnView;
    NSString *_uniqueID;
    UILabel *_loadingLable;
    UIActivityIndicatorView *_indicator;
}

- (void).cxx_destruct;
- (void)CloseParentViewController;
- (void)RNViewClick:(id)arg1;
- (void)addLoadingView;
- (void)dealloc;
- (void)gotoRNWebview:(id)arg1;
@property(nonatomic) _Bool hasVCAppear; // @synthesize hasVCAppear=_hasVCAppear;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (id)initWithCardModel:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)jsFatalErrorOccurs:(id)arg1;
- (_Bool)loadData;
- (void)loadView;
@property(retain, nonatomic) UILabel *loadingLable; // @synthesize loadingLable=_loadingLable;
- (void)notifyReactJs:(id)arg1;
- (void)onEnterAIOButtonTouched:(id)arg1;
- (void)onFollowButtonTouched:(id)arg1;
- (void)onMSFNetworkApnStateNotification:(id)arg1;
- (void)onStartVideoChatNotification:(id)arg1;
- (void)onUpdateCardDynamicInfoByDb:(id)arg1;
- (void)onUpdateCardDynamicInfoByReceived:(id)arg1;
- (void)removeLoadingView;
@property(retain, nonatomic) TReactView *rnView; // @synthesize rnView=_rnView;
@property(nonatomic) _Bool rnViewCreateError; // @synthesize rnViewCreateError=_rnViewCreateError;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)shareBtnClicked;
- (_Bool)usingNativeCardIfRNFailed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


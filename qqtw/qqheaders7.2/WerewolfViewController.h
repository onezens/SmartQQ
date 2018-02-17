//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQHalfScreenHotChatViewController.h"

#import "GSRequestCallBackDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WerewolfWebViewDelegate.h"

@class HotChatExitRequest, HotChatMgrExitRequest, NSString, RCTBridge, TReactView, UIView, WerewolfRNDownloadView, WerewolfWebViewController;

@interface WerewolfViewController : QQHalfScreenHotChatViewController <GSRequestCallBackDelegate, WerewolfWebViewDelegate, UIGestureRecognizerDelegate>
{
    RCTBridge *_bridge;
    _Bool _isLoadNotiCenter;
    _Bool _isWaitingRN;
    TReactView *_reactView;
    WerewolfRNDownloadView *_loadingView;
    HotChatExitRequest *_exitRequest;
    HotChatMgrExitRequest *_mgrExitRequest;
    WerewolfWebViewController *_werewolfWebVC;
    UIView *_coverView;
}

+ (id)getWerewolfBid;
- (void).cxx_destruct;
- (void)addWerewolfWebView:(id)arg1;
- (void)akPackgerDownloadedHandler:(id)arg1;
- (void)callWerewolfRNGift:(id)arg1;
- (void)changePlayerRecvAudioPermission:(id)arg1;
- (void)changePlayerState:(id)arg1;
- (void)changeRoomHalfHeight:(double)arg1;
- (void)changeSpeakPermission:(id)arg1;
- (void)closeWerewolfWebView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) HotChatExitRequest *exitRequest; // @synthesize exitRequest=_exitRequest;
- (void)exitWifiChatGroup;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)headIconTouch:(id)arg1;
- (id)initWithHotChatModel:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
@property(nonatomic) _Bool isWaitingRN; // @synthesize isWaitingRN=_isWaitingRN;
- (void)jsFatalErrorOccurs:(id)arg1;
- (void)jsIgnoreErrorOccurs:(id)arg1;
- (void)leftButtonClick:(id)arg1;
@property(retain, nonatomic) WerewolfRNDownloadView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HotChatMgrExitRequest *mgrExitRequest; // @synthesize mgrExitRequest=_mgrExitRequest;
- (void)onEvtSessionEvent:(id)arg1;
- (void)popToRootViewController;
- (void)pushHotChatToSettingViewController;
@property(retain, nonatomic) TReactView *reactView; // @synthesize reactView=_reactView;
- (void)requestDidFailed:(id)arg1 userInfo:(id)arg2;
- (void)requestDidSucceed:(id)arg1 userInfo:(id)arg2;
- (void)resetCustomTitleView;
- (void)rightButtonClick;
- (void)sendRNWithDic:(id)arg1;
- (void)setTReactView:(id)arg1 bridge:(id)arg2 groupCode:(unsigned long long)arg3;
- (void)setUpRNView;
@property(retain, nonatomic) WerewolfWebViewController *werewolfWebVC; // @synthesize werewolfWebVC=_werewolfWebVC;
- (void)showRightClick:(id)arg1;
- (void)showRoomFloate:(id)arg1;
- (void)startSpeakAnimate;
- (void)stateBridge:(id)arg1;
- (void)stopSpeakAnimate;
- (void)updateNotiCenter;
- (void)updateRightItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


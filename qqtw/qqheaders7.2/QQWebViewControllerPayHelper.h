//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQApplePayManagerDelegate.h"

@class NSMutableSet, NSString, QQWebViewController;

@interface QQWebViewControllerPayHelper : NSObject <QQApplePayManagerDelegate>
{
    NSString *_qqApplePayJSCallBackFun;
    _Bool _isAutoRetryWhenDistributeGoodsFail;
    NSMutableSet *_enablePayQQProductIdSet;
    NSMutableSet *_payAppleProductIdSet;
    NSString *_applePaySrc;
    int _xo;
    _Bool _isLockUI;
    QQWebViewController *_qqWebViewCtrl;
}

- (void)QQApplePayManager:(id)arg1 distributeGoodsFail:(id)arg2 errorMessage:(id)arg3 errorCode:(int)arg4;
- (void)QQApplePayManager:(id)arg1 distributeGoodsSuccess:(id)arg2;
- (void)QQApplePayManager:(id)arg1 loginExpiry:(id)arg2;
- (void)QQApplePayManager:(id)arg1 netWorkEorror:(id)arg2 state:(int)arg3;
- (void)QQApplePayManager:(id)arg1 orderFail:(id)arg2 errorMessage:(id)arg3 errorCode:(int)arg4;
- (void)QQApplePayManager:(id)arg1 payFail:(id)arg2 errorMessage:(id)arg3 errorCode:(int)arg4;
- (void)QQApplePayManagerUIShouldFinishLoading:(id)arg1;
- (void)addLoadingView;
- (void)buyCallbackToJs:(int)arg1 message:(id)arg2;
- (void)buyCallbackToJsWhenBuySucc:(id)arg1 realSaveNum:(int)arg2 payChannel:(int)arg3 payState:(int)arg4 provideState:(int)arg5;
- (id)createProductModel:(id)arg1;
- (void)dealloc;
- (void)doPay:(id)arg1;
- (void)enablePay:(id)arg1;
- (void)enablePayByQQProductIdArray:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isLockUI; // @synthesize isLockUI=_isLockUI;
- (_Bool)isNeedHandlePayMessage:(id)arg1;
- (void)lockUIWhenBuy;
- (void)lockUIWhenBuyWithTimeoutInterval:(double)arg1;
@property(nonatomic) QQWebViewController *qqWebViewCtrl; // @synthesize qqWebViewCtrl=_qqWebViewCtrl;
- (void)registerPayDelegateIfNeed;
- (void)removeLoadingView;
- (void)resetlayout:(long long)arg1;
- (void)startPay:(id)arg1;
- (void)unlockUIButtonWhenPayMessage;
- (void)unlockUIWhenBuyFinish;
- (void)unlockUIWhenTimeout;
- (void)unregisterPayDelegateIfNeed;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *applePaySrc; // @dynamic applePaySrc;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableSet *enablePayQQProductIdSet; // @dynamic enablePayQQProductIdSet;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoRetryWhenDistributeGoodsFail; // @dynamic isAutoRetryWhenDistributeGoodsFail;
@property(retain, nonatomic) NSMutableSet *payAppleProductIdSet; // @dynamic payAppleProductIdSet;
@property(copy, nonatomic) NSString *qqApplePayJSCallBackFun; // @dynamic qqApplePayJSCallBackFun;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UIAlertViewDelegate.h"

@class CFT_TPNotifyItem, CFT_UILoadingView, NSDictionary, NSString, NSTimer, UIButton, UILabel, UIView;

@interface CFT_UIHttpViewController : QQViewController <UIAlertViewDelegate>
{
    UIView *_translentNavigtionBar;
    CFT_UILoadingView *pLoadingView_;
    NSDictionary *busiDataInfo;
    NSTimer *timerTipInfo;
    UIView *maskingView_;
    _Bool bShowLoading;
    _Bool _isRightDragToBack;
    _Bool _nightmodeMasked;
    _Bool _showTranslentNavigationBar;
    int _navibarColorStyle;
    int _scene;
    int _loadingStyle;
    NSDictionary *_extraData;
    CFT_TPNotifyItem *_callbackItem;
    UIButton *_customNavBarLeftBtn;
    UILabel *_customNavBarTitleLabel;
    NSString *_adUrl;
}

@property(retain, nonatomic) NSString *adUrl; // @synthesize adUrl=_adUrl;
- (void)addTranslentNavigtionBar:(id)arg1 leftButtonText:(id)arg2 rightButtonText:(id)arg3;
- (void)bannerTipViewDidClick:(id)arg1;
@property(retain, nonatomic) NSDictionary *busiDataInfo; // @synthesize busiDataInfo;
@property(retain, nonatomic) CFT_TPNotifyItem *callbackItem; // @synthesize callbackItem=_callbackItem;
- (void)createImageRightButton:(id)arg1 norColor:(id)arg2 selColor:(id)arg3 action:(SEL)arg4;
- (void)createTextRightButton:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) UIButton *customNavBarLeftBtn; // @synthesize customNavBarLeftBtn=_customNavBarLeftBtn;
@property(retain, nonatomic) UILabel *customNavBarTitleLabel; // @synthesize customNavBarTitleLabel=_customNavBarTitleLabel;
- (void)dealloc;
- (void)debugLog;
- (void)debugLogWithParam:(id)arg1;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
- (void)hideTipInfoView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) int loadingStyle; // @synthesize loadingStyle=_loadingStyle;
@property(nonatomic) int navibarColorStyle; // @synthesize navibarColorStyle=_navibarColorStyle;
- (void)onDataReady:(id)arg1 DataInfo:(id)arg2;
- (void)onRightButtonClick:(id)arg1;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentWebPage:(id)arg1 title:(id)arg2;
- (void)removeLoadingView;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (void)setLeftButtonHidden:(_Bool)arg1;
- (void)setNaviBarBgImage:(id)arg1;
- (void)setRightButtonHidden:(_Bool)arg1;
@property(nonatomic) _Bool showTranslentNavigationBar; // @synthesize showTranslentNavigationBar=_showTranslentNavigationBar;
- (void)setTitle:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)showAdConfigBanner:(id)arg1;
- (id)showAdConfigBanner:(id)arg1 topOffset:(double)arg2;
- (void)showData:(id)arg1 param:(id)arg2;
- (void)showData:(id)arg1 param:(id)arg2 exParam:(id)arg3;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showSuccTipInfoViewWithTitle:(id)arg1;
- (void)showTipInfoViewWithTitle2:(id)arg1;
- (void)showTipInfoViewWithTitle:(id)arg1;
- (void)showTranslentNavigtionBar;
- (void)showWebPage:(id)arg1 title:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willRemoveFromParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


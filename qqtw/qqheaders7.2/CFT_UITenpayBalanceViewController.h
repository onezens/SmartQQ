//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "QQBannerTipViewDelegate.h"
#import "UIWebViewDelegate.h"

@class CFT_UICellBtnView, NSString, UIButton, UIScrollView, UITableView, UIWebView;

@interface CFT_UITenpayBalanceViewController : CFT_UICustomNaviBarViewController <QQBannerTipViewDelegate, UIWebViewDelegate>
{
    CFT_UICellBtnView *verifynameButton;
    UIButton *withdrawButton;
    UIButton *rechargeButton;
    UIScrollView *pScrollView_;
    UIWebView *_pageEndAdvWebView;
    _Bool isLoadingDisplayAD;
    _Bool showRealName;
    UITableView *_tableView;
    NSString *balance;
    NSString *_advUrl;
    NSString *_guidUrl;
}

@property(copy, nonatomic) NSString *advUrl; // @synthesize advUrl=_advUrl;
@property(copy, nonatomic) NSString *balance; // @synthesize balance;
- (void)dealloc;
@property(retain, nonatomic) NSString *guidUrl; // @synthesize guidUrl=_guidUrl;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

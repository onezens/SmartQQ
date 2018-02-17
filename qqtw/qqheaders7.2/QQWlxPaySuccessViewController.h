//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWlxBaseViewController.h"

#import "DialogUtilsProtocol.h"
#import "QQWlxNetWorkRequestDelegate.h"

@class NSDictionary, NSString, UIButton, UILabel, UIScrollView, UIView, YktConfig;

@interface QQWlxPaySuccessViewController : QQWlxBaseViewController <QQWlxNetWorkRequestDelegate, DialogUtilsProtocol>
{
    UIScrollView *scrollView;
    UIView *contentView;
    UILabel *vSep3;
    UIButton *btnFollow;
    YktConfig *yktConfig;
    NSDictionary *_rootParams;
    NSDictionary *_payResult;
}

@property(retain, nonatomic) NSDictionary *payResult; // @synthesize payResult=_payResult;
@property(retain, nonatomic) NSDictionary *rootParams; // @synthesize rootParams=_rootParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


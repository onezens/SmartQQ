//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseOrderDetailViewController.h"

@class NSMutableDictionary, NSString;

@interface CFT_UIRedGiftOrderDetailViewController : CFT_UIBaseOrderDetailViewController
{
    NSString *_skey;
    NSString *_skey_type;
    NSString *_pushData;
    NSString *_comefrom;
    NSString *_appInfo;
    NSMutableDictionary *_redgiftCofirmModel;
}

- (void)actionGetUserInfo:(id)arg1;
@property(copy, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
- (void)cancel;
@property(copy, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
- (void)dealloc;
- (id)init;
- (void)initView;
- (void)layoutNameLabel:(id)arg1;
- (void)layoutSubviews;
- (void)nextBtnClicked;
- (void)onPaySuccNotify:(id)arg1;
@property(copy, nonatomic) NSString *pushData; // @synthesize pushData=_pushData;
- (void)qpay_hb_pack_confirm;
@property(retain, nonatomic) NSMutableDictionary *redgiftCofirmModel; // @synthesize redgiftCofirmModel=_redgiftCofirmModel;
- (void)requestRedGiftDataModel;
@property(copy, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(copy, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer;

@interface UserSummaryVoiceLabel : UIView
{
    long long _uin;
    NSString *_mobileNo;
    NSString *_voidNetworkTypeStr;
    struct CGPoint _iconOriginPoint;
    struct CGPoint _textOriginPoint;
    struct CGPoint _textSupportVoiceOriginPoint;
    id <UserSummaryContainerTipsDelegate> _showDelegate;
    int _xo;
    NSTimer *_testTimer;
    _Bool _pcHasCamera;
    int _networkType;
}

- (void).cxx_destruct;
- (void)checkOnlineState;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)getCurrentTipsIconImageName;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutContentByTableHeaderView:(id)arg1;
- (void)requestUpdateNetWorkStatus:(long long)arg1;
- (void)requestUpdateNetWorkStatusWithMobileNo:(id)arg1;
- (void)setNetWorkStatus:(long long)arg1;
- (void)setNetWorkStatusWithMobileNo:(id)arg1;
@property(nonatomic) long long uin; // @dynamic uin;
- (void)updateSpecialPersonalOnlineInfoCallBack:(id)arg1;

// Remaining properties
@property(nonatomic) struct CGPoint iconOriginPoint; // @dynamic iconOriginPoint;
@property(retain, nonatomic) NSString *mobileNo; // @dynamic mobileNo;
@property(nonatomic) __weak id <UserSummaryContainerTipsDelegate> showDelegate; // @dynamic showDelegate;
@property(nonatomic) struct CGPoint textOriginPoint; // @dynamic textOriginPoint;
@property(nonatomic) struct CGPoint textSupportVoiceOriginPoint; // @dynamic textSupportVoiceOriginPoint;
@property(nonatomic) NSString *voidNetworkTypeStr; // @dynamic voidNetworkTypeStr;

@end


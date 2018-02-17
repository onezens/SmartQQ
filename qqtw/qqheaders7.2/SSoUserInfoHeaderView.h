//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSoUserInfoAppCell, SSoUserInfoNewUserCell, UIImageView;

@interface SSoUserInfoHeaderView : UIView
{
    UIImageView *_adImageView;
    SSoUserInfoNewUserCell *_userCellView;
    SSoUserInfoAppCell *_appCellView;
    UIView *_whiteView;
    _Bool _isShowAdView;
    _Bool _isAuthorized;
    _Bool _isShowWalletAd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) SSoUserInfoAppCell *appCellView; // @synthesize appCellView=_appCellView;
- (id)initWithFrame:(struct CGRect)arg1 appIcon:(id)arg2 appName:(id)arg3 headImage:(id)arg4 nickName:(id)arg5 uin:(long long)arg6;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
@property(nonatomic) _Bool isShowAdView; // @synthesize isShowAdView=_isShowAdView;
@property(nonatomic) _Bool isShowWalletAd; // @synthesize isShowWalletAd=_isShowWalletAd;
- (void)layoutSubviews;
@property(retain, nonatomic) SSoUserInfoNewUserCell *userCellView; // @synthesize userCellView=_userCellView;

@end


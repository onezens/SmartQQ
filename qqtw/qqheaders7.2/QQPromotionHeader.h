//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAvatarView, UIImageView, UILabel;

@interface QQPromotionHeader : UIView
{
    _Bool isPromotion;
    _Bool haveSetUin;
    _Bool _isTempFollowState;
    UILabel *nickLabel;
    UIImageView *flagView;
    NSString *promotionMsg;
    UILabel *promotionLabel;
    NSString *nickName;
    NSString *oppositeUin;
    id <QQPromotionHeaderDelegate> delegate;
    unsigned long long showMode;
    QQAvatarView *_iconView;
}

- (void).cxx_destruct;
@property(nonatomic) id <QQPromotionHeaderDelegate> delegate; // @synthesize delegate;
- (void)drawBtnArray:(id)arg1 andImage:(id)arg2 andSize:(struct CGRect)arg3 andTag:(unsigned long long)arg4 andFatherView:(id)arg5;
@property(retain, nonatomic) UIImageView *flagView; // @synthesize flagView;
- (int)getDeviceType;
@property(nonatomic) _Bool haveSetUin; // @synthesize haveSetUin;
@property(retain, nonatomic) QQAvatarView *iconView; // @synthesize iconView=_iconView;
- (id)init;
@property(nonatomic) _Bool isPromotion; // @synthesize isPromotion;
@property(nonatomic) _Bool isTempFollowState; // @synthesize isTempFollowState=_isTempFollowState;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
- (void)onClickCover:(id)arg1;
@property(retain, nonatomic) NSString *oppositeUin; // @synthesize oppositeUin;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel;
@property(retain, nonatomic) NSString *promotionMsg; // @synthesize promotionMsg;
- (void)refreshNickInfo:(id)arg1;
@property(nonatomic) unsigned long long showMode; // @synthesize showMode;
- (void)setUin:(id)arg1 andPromotionMsg:(id)arg2 andMode:(unsigned long long)arg3;
- (void)showBackground;
- (void)showBtns;
- (void)showPage;

@end


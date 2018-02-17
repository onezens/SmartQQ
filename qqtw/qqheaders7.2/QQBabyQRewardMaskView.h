//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMaskView.h"

@class QQBabyQRewardInfo, UIButton, UIImageView, UILabel;

@interface QQBabyQRewardMaskView : QQMaskView
{
    UIImageView *_boxView;
    UIImageView *_popupImageView;
    UIImageView *_boxOpenView;
    UIImageView *_babyqFlyView;
    UILabel *_label;
    UIButton *_closeButton;
    UIButton *_okButton;
    QQBabyQRewardInfo *_rewardInfo;
    id <QQBabyQRewardProtocol> _rewardDelegate;
}

- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)dealloc;
- (void)didTapButton:(id)arg1;
- (void)initForFirstPage;
- (void)initForSecondPage;
- (id)initWithRewardInfo:(id)arg1;
- (void)jumpToRewardDetail;
- (void)reportOnClickButton;
- (void)reportOnShow;
@property(nonatomic) __weak id <QQBabyQRewardProtocol> rewardDelegate; // @synthesize rewardDelegate=_rewardDelegate;
@property(retain, nonatomic) QQBabyQRewardInfo *rewardInfo; // @synthesize rewardInfo=_rewardInfo;
- (void)setupUI;
- (void)show:(_Bool)arg1;
- (void)showFirstPage;
- (void)showSecondPage;

@end


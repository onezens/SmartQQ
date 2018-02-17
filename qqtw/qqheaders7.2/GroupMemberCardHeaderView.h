//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQView.h"

@class CustomRemarkLabel, NSString, QQAsynUrlImageView, QQAvatarView, QQGroupMemberCardViewController, UIImageView, UILabel, UIView;

@interface GroupMemberCardHeaderView : QQView
{
    QQAsynUrlImageView *_backImageView;
    UIView *_backView;
    QQAvatarView *_headImageView;
    UILabel *_nickLabel1;
    UILabel *_nickLabel2;
    UILabel *_nickLabel3;
    CustomRemarkLabel *_markLabel;
    UIImageView *_redPointView;
    UIView *_signatureView;
    UILabel *_tipLabel;
    UIImageView *_warningImage;
    UIImageView *_genderImage;
    UILabel *_ageLabel;
    UIImageView *_cityImage;
    UILabel *_cityLabel;
    UIImageView *_distanceImage;
    UILabel *_distanceLabel;
    double _contentStartY;
    _Bool _noSecondNick;
    _Bool _noDetailInfo;
    _Bool _showWarningTip;
    _Bool _markLabelNewRank;
    _Bool _torchNewRank;
    QQGroupMemberCardViewController *_fatherVC;
    NSString *_nickName;
    struct CGRect _nickClickFrame1;
    struct CGRect _nickClickFrame2;
    struct CGRect _nickClickFrame3;
}

@property(retain, nonatomic) QQAsynUrlImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void)clickMarkLabel:(id)arg1;
@property(nonatomic) double contentStartY; // @synthesize contentStartY=_contentStartY;
- (void)dealloc;
@property(nonatomic) QQGroupMemberCardViewController *fatherVC; // @synthesize fatherVC=_fatherVC;
- (_Bool)groupRankShowed;
- (void)handleVisilityInWarning;
- (void)handleVisilityNotInWarning;
- (id)initWithFatherVC:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool markLabelNewRank; // @synthesize markLabelNewRank=_markLabelNewRank;
@property(nonatomic) struct CGRect nickClickFrame1; // @synthesize nickClickFrame1=_nickClickFrame1;
@property(nonatomic) struct CGRect nickClickFrame2; // @synthesize nickClickFrame2=_nickClickFrame2;
@property(nonatomic) struct CGRect nickClickFrame3; // @synthesize nickClickFrame3=_nickClickFrame3;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) _Bool noDetailInfo; // @synthesize noDetailInfo=_noDetailInfo;
@property(nonatomic) _Bool noSecondNick; // @synthesize noSecondNick=_noSecondNick;
- (void)refreshView;
- (void)resetNickArea;
@property(nonatomic) _Bool showWarningTip; // @synthesize showWarningTip=_showWarningTip;
@property(retain, nonatomic) UIView *signatureView; // @synthesize signatureView=_signatureView;
@property(nonatomic) _Bool torchNewRank; // @synthesize torchNewRank=_torchNewRank;
- (void)userHeaderClicked;

@end


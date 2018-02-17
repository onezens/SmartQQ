//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QQReadInJoyChannelEntranceDelegate.h"
#import "QQReadInJoyDislikeDelegate.h"
#import "QQReadInJoyFeedsHeaderDelegate.h"

@class NSString, QQKandianFeedsChannelEntranceButton, QQReadInJoyFeedsHeader, ReadInJoyChannelArticle, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface QQReadInJoySubsTableViewCell : UITableViewCell <QQReadInJoyDislikeDelegate, QQReadInJoyChannelEntranceDelegate, QQReadInJoyFeedsHeaderDelegate>
{
    UIImageView *_backgroundView;
    NSString *_source;
    NSString *_time;
    NSString *_title;
    unsigned int _iconType;
    _Bool _isRead;
    _Bool _isHighlight;
    NSString *_footerWord;
    UIColor *_footerColor;
    UILabel *titleLabel;
    UILabel *sourceLabel;
    UILabel *sourceTimeLabel;
    struct CGSize disLikeButtonSize;
    UILabel *footerLabel;
    UIView *separatorView;
    UIView *lineView;
    long long _ffType;
    long long _fhType;
    unsigned long long _fcLoc;
    unsigned long long _fhNextLoc;
    int _xo;
    QQKandianFeedsChannelEntranceButton *channelEntranceButton;
    QQReadInJoyFeedsHeader *feedsHeader;
    _Bool _isNeedChannelHeader;
    _Bool _isForPageVC;
    unsigned int _channelEntranceId;
    unsigned int _channelEntranceType;
    unsigned int _isShowTimestamp;
    unsigned long long _mode;
    unsigned long long _nextCellMode;
    UIButton *_dislikeButton;
    UIButton *_feedbackButton;
    NSString *_channelEntranceName;
    NSString *_channelEntranceTips;
    id <QQReadInJoyChannelEntranceBtnTouchedDelegate> _channelEntranceDelegate;
    ReadInJoyChannelArticle *_article;
    id <QQReadInJoySubsCellDelegate> _delegate;
}

+ (double)SubsTableViewHeightWithContent:(id)arg1;
+ (double)SubsTableViewHeightWithContent:(id)arg1 channelInfo:(id)arg2;
+ (double)channelEntranceBtnHeightWithIsNeed:(_Bool)arg1;
+ (struct CGSize)closestSizeWithOriginSize:(struct CGSize)arg1 FromOptionalSizeArray:(id)arg2;
+ (double)feedsCompactHeight:(id)arg1;
+ (double)feedsHeaderHeight:(long long)arg1;
+ (unsigned long long)getSeperatorType:(id)arg1;
+ (double)heightForTitle:(id)arg1 constraintWidth:(double)arg2;
+ (_Bool)isCropConfigOpen;
+ (double)separatorHeight:(unsigned long long)arg1;
+ (double)smallImageSourceTopMargin;
+ (double)smallImageTitleTopMargin;
+ (_Bool)subcribeHeaderVisalbe:(id)arg1;
+ (_Bool)supportAllSizeVideo:(id)arg1;
+ (struct UIEdgeInsets)tableContentInsent;
+ (_Bool)topicFooterVisalbe:(id)arg1;
+ (id)urlStrWithPtSize:(struct CGSize)arg1 FromOriginUrlStr:(id)arg2 cellTitle:(id)arg3;
+ (double)videoHeight:(struct CGSize)arg1;
- (void)addSeparatorView;
@property(retain, nonatomic) ReadInJoyChannelArticle *article; // @synthesize article=_article;
- (_Bool)calculateIsNeedToChangeLineBreakForNoCacheInLabel:(id)arg1;
- (void)channelEntranceBtnTouched:(id)arg1;
@property(nonatomic) id <QQReadInJoyChannelEntranceBtnTouchedDelegate> channelEntranceDelegate; // @synthesize channelEntranceDelegate=_channelEntranceDelegate;
@property(nonatomic) unsigned int channelEntranceId; // @synthesize channelEntranceId=_channelEntranceId;
@property(retain, nonatomic) NSString *channelEntranceName; // @synthesize channelEntranceName=_channelEntranceName;
@property(retain, nonatomic) NSString *channelEntranceTips; // @synthesize channelEntranceTips=_channelEntranceTips;
@property(nonatomic) unsigned int channelEntranceType; // @synthesize channelEntranceType=_channelEntranceType;
- (void)dealloc;
@property(nonatomic) id <QQReadInJoySubsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
- (void)feedbackTapped;
- (struct CGRect)getDislikeButtonFrameToWindow;
- (id)getLinesArrayOfStringInLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isForPageVC; // @synthesize isForPageVC=_isForPageVC;
@property(nonatomic) _Bool isNeedChannelHeader; // @synthesize isNeedChannelHeader=_isNeedChannelHeader;
- (_Bool)isNeedToChangeLineBreakInLabel:(id)arg1;
@property(nonatomic) unsigned int isShowTimestamp; // @synthesize isShowTimestamp=_isShowTimestamp;
- (_Bool)isSupportChangeLineBreak;
- (void)layoutChannelEntranceBtn;
- (void)layoutInfoLabelWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutfeedsHeader;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long nextCellMode; // @synthesize nextCellMode=_nextCellMode;
- (void)onClickTopicEntrance;
- (void)onClickTopicWithIndex:(int)arg1;
- (void)onDislike:(id)arg1;
- (void)onHeaderClick;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fcLoc; // @dynamic fcLoc;
@property(nonatomic) long long ffType; // @dynamic ffType;
@property(nonatomic) unsigned long long fhNextLoc; // @dynamic fhNextLoc;
@property(nonatomic) long long fhType; // @dynamic fhType;
@property(retain, nonatomic) UIColor *footerColor; // @dynamic footerColor;
@property(retain, nonatomic) NSString *footerWord; // @dynamic footerWord;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(nonatomic) _Bool isHighlight; // @dynamic isHighlight;
@property(nonatomic) _Bool isRead; // @dynamic isRead;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *time; // @dynamic time;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end


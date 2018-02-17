//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQChatViewTable, QQGroupFeeModel, UIImageView, UILabel;

@interface QQGroupFeeAIOMsgView : UIView
{
    QQGroupFeeModel *_groupFeeModel;
    UILabel *_title;
    UILabel *_subTitle;
    UIImageView *_backgroudView;
    UIImageView *_icon;
    UILabel *_message;
    UIImageView *_messageBg;
    QQChatViewTable *_chatViewTable;
    double _nickNameHeight;
}

+ (double)heightForModel:(id)arg1;
+ (id)labelWithFontSize:(double)arg1 color:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
- (struct CGRect)bubleFrame;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
- (void)commonInit;
@property(retain, nonatomic) QQGroupFeeModel *groupFeeModel; // @synthesize groupFeeModel=_groupFeeModel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (id)init;
- (id)initWithChatViewTable:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImageView *messageBg; // @synthesize messageBg=_messageBg;
@property(nonatomic) double nickNameHeight; // @synthesize nickNameHeight=_nickNameHeight;
- (void)setModel:(id)arg1;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void)voiceOverSupport;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQQuoteMsgBaseView.h"

@class QQEmotionLabel, UILabel, UIView;

@interface QQQuoteMsgTextView : QQQuoteMsgBaseView
{
    long long _maxRequestCompleteQuoteMsgTime;
    QQEmotionLabel *_titleLabel;
    QQEmotionLabel *_msgLabel;
    UILabel *_quoteLabel;
    UIView *_lineView;
    struct CGRect _maxRect;
}

+ (id)getLocalCompleteQuoteMsgModel:(id)arg1;
+ (double)getOtherWidth;
+ (double)getTextWidthWithViewWidth:(double)arg1;
+ (id)parseResultWithModel:(id)arg1 width:(double)arg2 font:(id)arg3 fontId:(long long)arg4;
+ (struct CGRect)preCalRectWithFont:(id)arg1 titleResult:(id)arg2 msgResult:(id)arg3 maxWidth:(double)arg4;
- (void)dealloc;
- (void)delayRefreshChatTableView;
- (void)gotoQutoMsg;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) struct CGRect maxRect; // @synthesize maxRect=_maxRect;
@property(retain, nonatomic) QQEmotionLabel *msgLabel; // @synthesize msgLabel=_msgLabel;
- (struct CGRect)preCalRectWithWidth:(double)arg1 titleResult:(id)arg2 msgResult:(id)arg3;
@property(retain, nonatomic) UILabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
- (void)refreshQuoteMsg:(id)arg1;
- (void)refreshUI;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
@property(retain, nonatomic) QQEmotionLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

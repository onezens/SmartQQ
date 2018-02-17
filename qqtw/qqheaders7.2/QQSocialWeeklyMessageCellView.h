//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMMessageBaseCellView.h"

@class NSString, QQSocialWeeklyMessageCellHeadView, QQSocialWeeklyMessageCellItemView, UIView;

@interface QQSocialWeeklyMessageCellView : QQSMMessageBaseCellView
{
    QQSocialWeeklyMessageCellHeadView *_headPannel;
    QQSocialWeeklyMessageCellItemView *_subtitlePannel;
    UIView *_separatorLine;
    NSString *_url;
    NSString *_uin;
    _Bool _longPressCallBack;
}

+ (id)createLabelWithFontSize:(double)arg1 bold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4;
+ (id)createSubLabelWithFontSize:(double)arg1 bold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4 left:(double)arg5 right:(double)arg6;
+ (int)getCellHeight:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)GetPaoPaoBgRect;
- (_Bool)didAction:(struct CGPoint)arg1;
- (id)findElementWithName:(id)arg1 forElement:(id)arg2;
- (struct CGRect)getContentFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool longPressCallBack; // @synthesize longPressCallBack=_longPressCallBack;
- (void)setCellModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (void)updateBackgroundImage;

@end

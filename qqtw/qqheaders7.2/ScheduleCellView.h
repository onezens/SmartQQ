//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

@class CALayer, CAShapeLayer, UILabel;

@interface ScheduleCellView : QQAIOCommonCellView
{
    double titleH;
    double subTitleH;
    UILabel *_typeLabel;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_addressLabel;
    UILabel *_notedataLabel;
    UILabel *_stateLabel;
    CALayer *_btmBubbleLayer;
    CALayer *_headBubbleLayer;
    CAShapeLayer *_splitLayer;
    struct CGRect _headRect;
    struct CGRect _bottomRect;
    struct CGRect _titleRect;
    struct CGRect _subTitleRect;
}

+ (double)contentHeight:(id)arg1;
- (id)createLabel:(id)arg1 color:(id)arg2 lines:(double)arg3;
- (void)dealloc;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawBubble;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawSplitLine:(struct CGRect)arg1;
- (id)getMenuItems;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)willDrawBubble;

@end


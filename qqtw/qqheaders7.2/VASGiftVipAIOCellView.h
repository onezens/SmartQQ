//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

@class VASGiftVipAIOMsgView;

@interface VASGiftVipAIOCellView : QQAIOCommonCellView
{
    VASGiftVipAIOMsgView *_msgView;
}

+ (id)dictForVASGiftVipAIOMsg:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)GetPaoPaoBgRect;
- (void)calBubbleBackRect;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (id)getMenuItems;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)layoutSubviews;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
@property(retain, nonatomic) VASGiftVipAIOMsgView *msgView; // @synthesize msgView=_msgView;
- (void)setAioModel:(id)arg1;

@end


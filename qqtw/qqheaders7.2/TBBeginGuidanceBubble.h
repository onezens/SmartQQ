//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView;

@interface TBBeginGuidanceBubble : UIButton
{
    UIImageView *_atTipsArrow;
    double _arrowOffset;
}

- (void)adjustArrowPosition;
- (void)dealloc;
- (id)init;
- (void)setArrowOffset:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGuidanceText:(id)arg1;

@end


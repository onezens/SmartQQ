//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TagItemView : UIView
{
    UIButton *_labelBtn;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 withTitle:(id)arg2 withTagId:(unsigned long long)arg3;
- (void)itemClicked:(id)arg1;
- (void)itemTouchCancel:(id)arg1;
- (void)itemTouchDown:(id)arg1;
@property(retain, nonatomic) UIButton *labelBtn; // @synthesize labelBtn=_labelBtn;

@end


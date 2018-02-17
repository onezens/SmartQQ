//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UILabel;

@interface FollowedAndFansNumberView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isNightMode;
    CDUnknownBlockType _clickAction;
    UILabel *_textLabel;
    UILabel *_numberLabel;
}

@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (void)dealloc;
- (id)genNumberShowingString:(unsigned int)arg1;
- (struct CGSize)getLayoutSize:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void)onClick:(id)arg1;
- (void)setNumber:(unsigned int)arg1;
- (void)setText:(id)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


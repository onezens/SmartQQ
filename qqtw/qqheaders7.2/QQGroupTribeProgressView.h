//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface QQGroupTribeProgressView : UIView
{
    UILabel *_textLabel;
    UIActivityIndicatorView *_indicator;
}

- (void)createIndicator;
- (void)dealloc;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setProgress:(int)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end


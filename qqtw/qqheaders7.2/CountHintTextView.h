//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface CountHintTextView : UITextView
{
    UILabel *_countHintLabel;
    UILabel *_placeHolderLabel;
    int _limitLength;
    NSString *_placeholder;
    UIColor *_placeholderColor;
}

- (void)awakeFromNib;
@property(retain, nonatomic) UILabel *countHintLabel; // @synthesize countHintLabel=_countHintLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int limitLength; // @synthesize limitLength=_limitLength;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)textChanged:(id)arg1;

@end


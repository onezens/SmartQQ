//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CloudWord, NSArray, NSMutableAttributedString;

@interface CloudTagLabel : UIView
{
    struct __CTFrame *_textFrame;
    NSMutableAttributedString *_attributeStr;
    unsigned long long _maximumNumberOfRows;
    struct CGSize _containerSize;
    CloudWord *_word;
    NSArray *_lines;
    struct CGSize _textBoundingSize;
}

- (void).cxx_destruct;
- (void)clearColorToJoinedEmoji;
- (struct CGColor *)cloudTextGetCGColor:(struct CGColor *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawText:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
- (void)prepare;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGSize textBoundingSize; // @synthesize textBoundingSize=_textBoundingSize;
@property(retain, nonatomic) CloudWord *word; // @synthesize word=_word;
- (void)textDrawRun:(id)arg1 run:(struct __CTRun *)arg2 context:(struct CGContext *)arg3 ranges:(id)arg4 verticalOffset:(double)arg5;

@end


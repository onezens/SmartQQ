//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMessageReadTagView.h"

@class NSString, UIFont, UIImage;

@interface QQMessageWordView : QQMessageReadTagView
{
    UIImage *_redBackgroundImage;
    UIFont *_wordFont;
    unsigned long long _wordLengthLimit;
}

- (void).cxx_destruct;
- (void)commonInit;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)getFitSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long wordLengthLimit; // @synthesize wordLengthLimit=_wordLengthLimit;
@property(retain, nonatomic) NSString *wordText;
- (struct CGSize)textSize;

@end


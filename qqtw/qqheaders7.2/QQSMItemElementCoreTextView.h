//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementBaseView.h"

@class NSAttributedString;

@interface QQSMItemElementCoreTextView : QQSMItemElementBaseView
{
    NSAttributedString *_attributedString;
}

+ (id)getContentFromElement:(id)arg1;
+ (double)getContentHeight:(id)arg1 withMaxWidth:(double)arg2;
+ (double)heightForAttributedString:(id)arg1 forWidth:(double)arg2;
+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setQQSMItemElementBase:(id)arg1;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (_Bool)shouldReuse;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface QQDYPluginLabel : UILabel
{
    struct UIEdgeInsets _inset;
}

- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithInset:(struct UIEdgeInsets)arg1;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
- (void)sizeToFit;

@end

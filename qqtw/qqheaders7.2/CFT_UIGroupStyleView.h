//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface CFT_UIGroupStyleView : UIView
{
    long long _lines;
    UIImageView *_bgImageView;
    int _style;
    long long _lineHeight;
    double _shrinkWidth;
}

+ (id)viewWithLines:(long long)arg1;
- (long long)getLineCount;
- (id)initWithLines:(long long)arg1;
@property(nonatomic) long long lineHeight; // @synthesize lineHeight=_lineHeight;
- (void)setContentInsetX:(long long)arg1;
- (void)setLineCount:(long long)arg1;
@property(nonatomic) double shrinkWidth; // @synthesize shrinkWidth=_shrinkWidth;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)updateLayout;

@end

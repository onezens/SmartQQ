//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView;

@interface QQAlbumLoadingView : UIView
{
    UIActivityIndicatorView *_indicator;
    struct CGRect _bkgRect;
    struct CGRect _indicatorRect;
    struct CGRect _tipsRect;
    NSString *_strTips;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)fillRoundedRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
@property(retain, nonatomic) NSString *strTips; // @synthesize strTips=_strTips;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQVipComicVideoPlayerNavBarView, QQVipFunctionBlurView;

@interface QQVipComicVideoPlayerNavBar : UIView
{
    NSString *_mainTitle;
    NSString *_subTitle;
    QQVipFunctionBlurView *_blurBackground;
    QQVipComicVideoPlayerNavBarView *_navBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQVipFunctionBlurView *blurBackground; // @synthesize blurBackground=_blurBackground;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) QQVipComicVideoPlayerNavBarView *navBarView; // @synthesize navBarView=_navBarView;
- (void)setNavBarDelegate:(id)arg1;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;

@end


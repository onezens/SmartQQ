//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView;

@interface SpriteOpenTipView : UIView
{
    UIActivityIndicatorView *_loadingView;
    UIImageView *_imagView;
    UIImageView *_rightImgView;
    NSString *_path;
    UIButton *button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button;
- (void)dealloc;
- (void)hideLoadingStatus;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3 title:(id)arg4;
- (void)setButonImage:(id)arg1;
- (void)setPreviewImageWithPath:(id)arg1 data:(id)arg2;
- (void)showLoadingStatus;

@end


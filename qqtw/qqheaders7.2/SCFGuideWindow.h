//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIButton, UIImageView, UILabel;

@interface SCFGuideWindow : UIWindow
{
    UIImageView *_tipsImageView;
    UILabel *_tipsLabel;
    UIButton *_confirmButton;
    id <SCFGuideWindowDelegate> _guideDelegate;
}

- (void).cxx_destruct;
- (void)confirmAction:(id)arg1;
@property(nonatomic) __weak id <SCFGuideWindowDelegate> guideDelegate; // @synthesize guideDelegate=_guideDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)loadContentView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullscreenOverlayView.h"

@class UIImageView, UIView, UIWindow;

@interface FANFSavePathAlertView : FullscreenOverlayView
{
    UIView *_container;
    UIImageView *_bgImgView;
    id <FANFSavePathAlertViewDelegate> _alertdelegate;
    UIWindow *_lastKeyWindow;
}

- (void)cancelButtonClick:(id)arg1;
@property(nonatomic) id <FANFSavePathAlertViewDelegate> delegate; // @synthesize delegate=_alertdelegate;
- (void)dismiss;
- (id)initWithDelegate:(id)arg1;
- (void)show;

@end

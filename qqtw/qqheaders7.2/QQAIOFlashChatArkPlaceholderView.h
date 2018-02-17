//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BubbleBgInfo, CALayer, NSString, QQEmotionLabel, UIActivityIndicatorView, UIButton;

@interface QQAIOFlashChatArkPlaceholderView : UIView
{
    BubbleBgInfo *_bubbleInfo;
    CALayer *_bubbleLayer;
    QQEmotionLabel *_label;
    UIActivityIndicatorView *_loadingIndicator;
    UIButton *_reloadButton;
    NSString *_text;
    long long _direction;
    CDUnknownBlockType _clickReloadButtonBlock;
}

- (void).cxx_destruct;
- (struct CGRect)bubbleFrame;
@property(retain, nonatomic) BubbleBgInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) CALayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(copy, nonatomic) CDUnknownBlockType clickReloadButtonBlock; // @synthesize clickReloadButtonBlock=_clickReloadButtonBlock;
- (void)didClickReloadButton:(id)arg1;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void)hideLoadingIndicator;
- (void)hideReloadButton;
- (id)initWithFrame:(struct CGRect)arg1 arrowDirection:(long long)arg2;
@property(retain, nonatomic) QQEmotionLabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)showLoadingIndicator;
- (void)showReloadButton;

@end

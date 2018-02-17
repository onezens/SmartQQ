//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSInvocation, NSMutableDictionary, UIImageView, UILabel;

@interface QQTabItem : UIControl
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    NSMutableDictionary *_titles;
    NSMutableDictionary *_images;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_titleColors;
    NSMutableDictionary *_titleShadowColors;
    double _spaceHeightBetweenImageAndTitle;
    CDUnknownBlockType _tabItemDidTapedBlock;
    NSInvocation *_sendTouchActionInvocation;
    NSInvocation *_setUnhighlightedInvocation;
    double _startTime;
    _Bool _disableSendActionDelay;
}

- (void)dealloc;
@property(nonatomic) _Bool disableSendActionDelay; // @synthesize disableSendActionDelay=_disableSendActionDelay;
@property(readonly, nonatomic, getter=imageView) UIImageView *imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)itemTaped:(id)arg1;
- (void)layoutSubviews;
- (void)resetState;
- (void)sendTouchActionDelay;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) double spaceHeightBetweenImageAndTitle; // @synthesize spaceHeightBetweenImageAndTitle=_spaceHeightBetweenImageAndTitle;
@property(copy, nonatomic) CDUnknownBlockType tabItemDidTapedBlock; // @synthesize tabItemDidTapedBlock=_tabItemDidTapedBlock;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUnhighlightedAfterDelay:(double)arg1;
@property(readonly, nonatomic, getter=titleLabel) UILabel *titleLabel;

@end


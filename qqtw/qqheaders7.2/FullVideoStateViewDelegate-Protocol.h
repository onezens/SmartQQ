//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQReadInJoyVideoStateDelegate.h"

@class UIButton, UIView;

@protocol FullVideoStateViewDelegate <QQReadInJoyVideoStateDelegate>
- (UIView *)playCountView;

@optional
- (void)onPlayButtonDidClick:(UIButton *)arg1;
- (void)onSliderEndSeek;
- (void)onViewDoubleTap;
- (void)onViewSingleTap;
@end


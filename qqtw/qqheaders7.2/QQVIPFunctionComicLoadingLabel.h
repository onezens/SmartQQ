//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSMutableString, NSTimer;

@interface QQVIPFunctionComicLoadingLabel : UILabel
{
    NSTimer *_timer;
    NSMutableString *_localStr;
}

- (void)dealloc;
- (void)startAnimate;
- (void)stopAnimate;
- (void)timerSel;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage, TBDrawView;

@protocol TBDrawViewDelegate <NSObject>

@optional
- (void)drawMaskImage:(CIImage *)arg1;
- (void)drawUndoComplete;
- (void)drawViewCleanMosaic:(TBDrawView *)arg1;
- (void)drawViewDidCancel:(TBDrawView *)arg1;
- (void)drawViewWillBegin:(TBDrawView *)arg1;
- (void)drawViewWillEnd:(TBDrawView *)arg1;
- (void)drawViewWillMove:(TBDrawView *)arg1;
@end


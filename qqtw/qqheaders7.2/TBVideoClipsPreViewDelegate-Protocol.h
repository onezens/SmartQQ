//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBVideoClipsPreView, TBVideoClipsPreViewItem;

@protocol TBVideoClipsPreViewDelegate <NSObject>

@optional
- (void)videoClipsPreView:(TBVideoClipsPreView *)arg1 didSelectItem:(TBVideoClipsPreViewItem *)arg2;
- (void)videoClipsPreView:(TBVideoClipsPreView *)arg1 moveBeginItem:(TBVideoClipsPreViewItem *)arg2;
- (void)videoClipsPreView:(TBVideoClipsPreView *)arg1 moveEndItem:(TBVideoClipsPreViewItem *)arg2;
- (void)videoClipsPreView:(TBVideoClipsPreView *)arg1 movingItem:(TBVideoClipsPreViewItem *)arg2;
@end


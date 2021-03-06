//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QZFeedVideoView, UITableViewCell;

@protocol QZFeedVideoPlayRightManagerDelegate <NSObject>
- (NSArray *)getFeedVideoViewsInCell:(UITableViewCell *)arg1;
- (double)getScrollSpeed;

@optional
- (void)checkVideoIllegal:(UITableViewCell *)arg1;
- (void)currentFocusFeedCellChange:(UITableViewCell *)arg1;
- (void)feedCell:(UITableViewCell *)arg1 playRightChangeTo:(_Bool)arg2;
- (_Bool)needAsyncaSnapImgWhenDisappear:(QZFeedVideoView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FriendListHeaderView;

@protocol MulMemSelMainPageTableViewDelegate <NSObject>

@optional
- (void)onDidScrollView;
- (void)onDidSelectMemCallback:(id)arg1;
- (void)onDidSelectedGroupCallback:(FriendListHeaderView *)arg1;
- (void)onScrollViewWillBeginDragging;
@end


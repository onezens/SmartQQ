//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIScrollView;

@protocol GroupListViewDelegate <NSObject>

@optional
- (void)groupListClickAddGroup;
- (void)groupListSelected:(NSString *)arg1;
- (void)groupListViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)groupListViewDidScroll:(UIScrollView *)arg1;
- (void)groupListViewWillBeginDragging:(UIScrollView *)arg1;
@end


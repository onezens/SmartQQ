//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBPageScrollView;

@protocol PageScrollViewItemProtocol <NSObject>

@optional
- (void)pageScrollViewItemDidBeCovered:(TBPageScrollView *)arg1;
- (void)pageScrollViewItemDidHide:(TBPageScrollView *)arg1;
- (void)pageScrollViewItemDidShow:(TBPageScrollView *)arg1;
- (void)pageScrollViewItemWillBeginDragging:(TBPageScrollView *)arg1;
- (void)prepareForReuse;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QQStorySGTopCell;

@protocol QQStorySGTopCellDelegate <NSObject>
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 inviteFriend:(NSArray *)arg2;
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 joinShareGroup:(NSString *)arg2;
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 updateGroupName:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PACardDynamicMsgModel;

@protocol QQPAProfileCardSubscribeTableViewDelegate <NSObject>

@optional
- (void)fetchMoreDynamicInfo;
- (void)onClickDynamicMsgCell:(PACardDynamicMsgModel *)arg1;
- (void)onClickFollowBtn;
- (void)onClickMoreInfoBtn;
- (void)tableViewDidScroll;
- (void)tableViewWillEndDragging;
@end


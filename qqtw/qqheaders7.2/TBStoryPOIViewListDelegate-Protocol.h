//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBAddressModel, TBStoryPOIListView;

@protocol TBStoryPOIViewListDelegate <NSObject>

@optional
- (void)storyPOIView:(TBStoryPOIListView *)arg1 didFinishWithAddressInfo:(TBAddressModel *)arg2;
- (void)storyPOIViewDidCancel:(TBStoryPOIListView *)arg1;
@end


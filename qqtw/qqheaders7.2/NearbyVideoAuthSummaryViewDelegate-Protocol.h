//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NearbyVideoAuthModel, NearbyVideoAuthSummaryView;

@protocol NearbyVideoAuthSummaryViewDelegate <NSObject>
- (void)onTapVideoAuthSummaryView:(NearbyVideoAuthSummaryView *)arg1 videoAuthModel:(NearbyVideoAuthModel *)arg2 isHost:(_Bool)arg3 isAuth:(_Bool)arg4;
- (void)videoAuthSummaryViewOnLayout:(NearbyVideoAuthSummaryView *)arg1;
@end


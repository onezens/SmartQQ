//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAModel, NSError;

@protocol FAAirCopyDelegate <NSObject>
- (void)OnAirCopySuccess:(FAModel *)arg1 isGroupTempSpace:(_Bool)arg2;
- (void)OnRequestFail:(FAModel *)arg1 withErr:(NSError *)arg2;
- (void)OnSendMsgFail:(FAModel *)arg1 withErr:(NSError *)arg2;
@end

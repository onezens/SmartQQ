//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface VASRedPointUIBrigde : NSObject
{
    NSString *_path;
    UIView *_showingView;
}

+ (id)getAppInfosBySet:(long long)arg1;
+ (id)getNumRedBusisBySet:(long long)arg1;
+ (id)getNumRedPointShowInfoBySet:(long long)arg1;
+ (id)getRedPointShowInfoBySet:(long long)arg1;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (id)getRedPointShowInfo;
- (void)handleRedPointNumberTypeAppInfoContentChangedNotification:(id)arg1;
- (void)hideRedPointIfNeed;
- (id)init;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)reloadRedPointInfo;
@property(nonatomic) __weak UIView *showingView; // @synthesize showingView=_showingView;

@end


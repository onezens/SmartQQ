//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UITableView;

@protocol SCFTableViewDelegate <NSObject>

@optional
- (void)onAddSCFFriendCallback;
- (void)onDidSelectedSCFFriendCallback:(id)arg1;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end


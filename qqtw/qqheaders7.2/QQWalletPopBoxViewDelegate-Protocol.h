//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQWalletPopBoxView;

@protocol QQWalletPopBoxViewDelegate <NSObject>

@optional
- (void)popBoxView:(QQWalletPopBoxView *)arg1 enterDetailURL:(NSString *)arg2;
- (void)popBoxViewCancel:(QQWalletPopBoxView *)arg1;
- (void)popBoxViewClicked:(QQWalletPopBoxView *)arg1;
@end

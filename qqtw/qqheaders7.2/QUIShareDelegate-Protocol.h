//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QUIShareActivity, QUIShareView;

@protocol QUIShareDelegate <NSObject>

@optional
- (void)onQbossImgViewAdClicked:(NSString *)arg1;
- (void)shareDidAction:(QUIShareActivity *)arg1;
- (void)shareDidAppear:(QUIShareView *)arg1;
- (void)shareDidDismiss:(QUIShareView *)arg1;
@end


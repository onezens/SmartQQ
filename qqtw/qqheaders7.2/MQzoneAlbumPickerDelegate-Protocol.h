//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QzoneFeedModel, UIViewController;

@protocol MQzoneAlbumPickerDelegate <NSObject>

@optional
- (void)didSelectAlbum:(QzoneFeedModel *)arg1;
- (void)didSelectAlbum:(QzoneFeedModel *)arg1 viewController:(UIViewController *)arg2;
- (void)setUploaFrom:(long long)arg1;
@end


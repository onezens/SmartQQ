//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PECropViewController, UIImage;

@protocol PECropViewControllerDelegate <NSObject>
- (void)cropViewController:(PECropViewController *)arg1 didFinishCroppingImage:(UIImage *)arg2;
- (void)cropViewControllerDidCancel:(PECropViewController *)arg1;
@end

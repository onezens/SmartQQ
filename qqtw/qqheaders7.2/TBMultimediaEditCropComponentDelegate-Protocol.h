//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol TBMultimediaEditCropComponentDelegate <NSObject>
- (struct CGRect)calcEditFrameOfViewController:(UIImage *)arg1;
- (NSString *)editViewSendBtnTitle;
- (void)editingImageViewSetImage:(UIImage *)arg1;
- (UIImage *)getEditngImageToCrop;
- (void)setEditingImageToCrop:(UIImage *)arg1;
@end


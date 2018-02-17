//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (UIImageDataExpress)
+ (id)borderImage:(id)arg1;
+ (id)clipImageByGoldenSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2;
+ (id)clipImageByNormalSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2 innerGlow:(_Bool)arg3;
+ (id)mergeGridsImageLT2RB:(id)arg1;
+ (id)roundClipImageWithSize:(id)arg1 angle:(double)arg2;
- (id)GetBigImage;
- (id)accelerateBlurWithImage:(double)arg1;
- (void)drawRoundCornerWithinSize:(struct CGSize)arg1 cornerType:(int)arg2;
- (id)getThumbnailWithRoundCorner:(_Bool)arg1 cornerType:(int)arg2;
- (id)grayImage;
- (id)iconImageWithWidth:(double)arg1 cornerRadius:(double)arg2;
- (id)imageByScalingAndCroppingForSize:(struct CGSize)arg1;
- (id)invertColorImage;
- (_Bool)is2xScreen;
- (id)qqScaleToSize:(struct CGSize)arg1;
- (id)roundCornerImageWithSize:(struct CGSize)arg1;
- (id)roundCornerImageWithSize:(struct CGSize)arg1 cornerType:(int)arg2;
- (id)whiteImage;
@end


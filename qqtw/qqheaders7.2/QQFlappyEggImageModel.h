//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString, UIImage;

@interface QQFlappyEggImageModel : QQModel
{
    int _imageType;
    NSString *_imageName;
    UIImage *_image;
    unsigned long long _repeatCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;

@end


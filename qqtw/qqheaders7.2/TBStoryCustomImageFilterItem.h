//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBStoryVideoVisualEffectsItem.h"

@class NSArray, NSString, UIImageView;

@interface TBStoryCustomImageFilterItem : TBStoryVideoVisualEffectsItem
{
    int _nPicHeight;
    int _nPicWidth;
    int _nStandardHeight;
    int _nStandardWidth;
    int _nAlign;
    NSArray *_marginArray;
    NSString *_imageName;
    NSString *_jsonPath;
    UIImageView *_imageView;
}

- (void)dealloc;
- (id)init;
- (_Bool)isPublish;
- (void)parseJson;
- (void)updateImage;
- (void)updateItem;

@end

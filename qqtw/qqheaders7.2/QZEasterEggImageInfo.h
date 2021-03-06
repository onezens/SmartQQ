//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSString, UIImage;

@interface QZEasterEggImageInfo : QZoneModel
{
    NSString *_imageURL;
    NSString *_imageID;
    struct CGSize _imageSize;
    UIImage *_image;
    NSString *_keyword;
    long long _sourceID;
    long long _imageEntrance;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long imageEntrance; // @synthesize imageEntrance=_imageEntrance;
@property(readonly, copy, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithID:(id)arg1 URL:(id)arg2 size:(struct CGSize)arg3 keyword:(id)arg4 sourceID:(long long)arg5 easterEggEntrance:(long long)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(readonly, nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;

@end


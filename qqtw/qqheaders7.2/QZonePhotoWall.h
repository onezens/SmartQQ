//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZJMainPagePhotoWall.h"

@class QZoneCoverPictureInfo;

@interface QZonePhotoWall : QZJMainPagePhotoWall
{
    QZoneCoverPictureInfo *_picutreInfos;
    long long _state;
}

+ (id)fromJCEObject:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) QZoneCoverPictureInfo *picutreInfos; // @synthesize picutreInfos=_picutreInfos;
@property(nonatomic) long long state; // @synthesize state=_state;

@end


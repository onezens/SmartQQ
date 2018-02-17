//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@interface PreviewSecretPictureModel : QQModel
{
    long long _snapshotCount;
    long long _controlType;
}

+ (id)defaultFilePath;
- (void)addSnapshotCount;
- (void)asyncSave;
- (id)cacheFilePath;
- (id)initWithPermissionType:(long long)arg1;
- (_Bool)isCanPreview;
- (_Bool)isFirstSnapshot;
- (_Bool)isSnapshotCountBeyond;
- (_Bool)isSnapshotCountMax;
- (void)resetSnapShotCount;

@end


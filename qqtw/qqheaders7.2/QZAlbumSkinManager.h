//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZAlbumSkinManager : NSObject
{
}

+ (id)albumSkinResourcePath:(id)arg1;
+ (id)bgImage:(id)arg1;
+ (void)downloadResource:(id)arg1;
+ (id)getAlbumSkinDataForUin:(long long)arg1;
+ (id)imageForPath:(id)arg1;
+ (id)instance;
+ (_Bool)isResourceReady:(id)arg1;
+ (id)nvBgImage:(id)arg1;
+ (id)operationBgImage:(id)arg1;
+ (id)operationIconImagePath:(id)arg1;
+ (void)setAlbumSkinData:(id)arg1 ForUin:(long long)arg2;
+ (id)tabbarBgImage:(id)arg1;
+ (id)tabbarIconImageWithTitle:(id)arg1 zipUrl:(id)arg2 isSelected:(_Bool)arg3 isShowAlbumSkin:(_Bool)arg4;
- (void)AlbumSkinChanged:(id)arg1;
- (id)init;
- (void)requestFinished:(id)arg1;

@end


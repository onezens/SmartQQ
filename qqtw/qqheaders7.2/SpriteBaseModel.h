//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SpriteFileInfo;

@interface SpriteBaseModel : NSObject
{
    _Bool isResDowned;
    unsigned int ts;
    int _tag;
    NSString *idStr;
    NSString *name;
    NSString *zipUrl;
    SpriteFileInfo *jsonFile;
    SpriteFileInfo *atlasFile;
    SpriteFileInfo *pngFile;
    long long vipLevel;
    long long feeType;
}

@property(retain, nonatomic) SpriteFileInfo *atlasFile; // @synthesize atlasFile;
- (void)dealloc;
@property(nonatomic) long long feeType; // @synthesize feeType;
- (id)getModelFolderName;
- (id)getPlayResFileUnifiedName;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr;
- (id)init;
- (id)initWithIdStr:(id)arg1;
- (id)initWithNumIdStr:(id)arg1;
- (_Bool)isExistPlayRes;
- (_Bool)isExistPlayResInDownlondFolder;
- (_Bool)isExistPlayResInFile;
- (_Bool)isExistPlayResInMemory;
- (_Bool)isExistPlayResWithPath:(id)arg1;
@property(nonatomic) _Bool isResDowned; // @synthesize isResDowned;
@property(retain, nonatomic) SpriteFileInfo *jsonFile; // @synthesize jsonFile;
- (void)moveUnzipRes;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)playNativeZipPath;
@property(retain, nonatomic) SpriteFileInfo *pngFile; // @synthesize pngFile;
- (id)readConfigFileInfo;
- (void)removePlayRes;
- (void)setLightResWithAnother:(id)arg1;
- (void)setPlayResDataWithAnother:(id)arg1;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int ts; // @synthesize ts;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel;
@property(retain, nonatomic) NSString *zipUrl; // @synthesize zipUrl;
- (id)spriteDefaultPlayResPath;
- (id)spritePlayResPath;
- (id)spriteRootPath;
- (void)wearLightRes;
- (void)wearNoLoadPlayResData;
- (void)wearPlayRes;
- (void)wearPlayResWithPath:(id)arg1;
- (void)wearPlayResWithPath:(id)arg1 isLoadData:(_Bool)arg2;

@end


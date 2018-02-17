//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteBaseModel.h"

@class NSArray, NSString, SpriteFileInfo, UIImage;

@interface SpriteActionModle : SpriteBaseModel
{
    _Bool isPreviewResDowned;
    _Bool isShow;
    _Bool isSoundAction;
    unsigned int version;
    int iconValue;
    int isSpecial;
    int isDiyAction;
    int diySoundId;
    int actionSubType;
    int posType;
    int _packageId;
    UIImage *ShowIcon;
    UIImage *textActonIcon;
    long long use;
    long long type;
    long long feeType;
    NSString *animationName;
    NSString *peerAnimationName;
    NSString *actUrl;
    NSString *textImgUrl;
    SpriteFileInfo *peerAtlasFile;
    SpriteFileInfo *peerJsonFile;
    SpriteFileInfo *peerPngFile;
    long long textType;
    NSString *text;
    double diySoundBeginTs;
    double actionDis;
    double actionPeerDis;
    NSArray *_pkIds;
    long long _activityStartTime;
    long long _activityEndTime;
}

+ (id)actionFolderPathWithId:(id)arg1;
+ (id)actionesModuleRootPath;
+ (void)createAllFoldersWith:(id)arg1;
+ (id)diyActionSoundPathWithId:(id)arg1;
+ (id)playNativeFloderPath:(id)arg1;
+ (id)playNativeZipPath:(id)arg1;
+ (id)playResUrl:(id)arg1;
+ (id)previewNativePath:(id)arg1;
+ (id)previewUrl:(id)arg1;
+ (id)showIconNativePath:(id)arg1;
+ (id)showIconUrl:(id)arg1;
+ (id)textActionIconNativePath:(id)arg1;
@property(retain, nonatomic) UIImage *ShowIcon; // @synthesize ShowIcon;
@property(retain, nonatomic) NSString *actUrl; // @synthesize actUrl;
@property(nonatomic) double actionDis; // @synthesize actionDis;
@property(nonatomic) double actionPeerDis; // @synthesize actionPeerDis;
@property(nonatomic) int actionSubType; // @synthesize actionSubType;
@property(nonatomic) long long activityEndTime; // @synthesize activityEndTime=_activityEndTime;
@property(nonatomic) long long activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(retain, nonatomic) NSString *animationName; // @synthesize animationName;
- (void)dealloc;
@property(nonatomic) double diySoundBeginTs; // @synthesize diySoundBeginTs;
@property(nonatomic) int diySoundId; // @synthesize diySoundId;
@property(nonatomic) long long feeType; // @synthesize feeType;
- (id)getModelFolderName;
- (int)getOperationsIconType;
- (id)getPlayResFileUnifiedName;
- (id)getPlayResUnifiedName;
@property(nonatomic) int iconValue; // @synthesize iconValue;
- (id)initWithDic:(id)arg1;
- (id)initWithId:(id)arg1;
- (_Bool)isCollect;
- (_Bool)isCtocActionModel;
@property(nonatomic) int isDiyAction; // @synthesize isDiyAction;
- (_Bool)isExistCompetence;
- (_Bool)isExistPeerPlayResnDownloadFolder;
- (_Bool)isExistPlayResInDownlondFolder;
- (_Bool)isExistPlayResInFile;
- (_Bool)isExistPlayResInMemory;
- (_Bool)isExistSelfPlayResInDownloadFolder;
- (_Bool)isFreeAction;
- (_Bool)isGroupActionModel;
- (_Bool)isNeedJoinAtive;
- (_Bool)isNeedVip;
@property(nonatomic) _Bool isPreviewResDowned; // @synthesize isPreviewResDowned;
- (_Bool)isSameWithAnother:(id)arg1;
@property(nonatomic) _Bool isShow; // @synthesize isShow;
- (_Bool)isShowBullet;
@property(nonatomic) _Bool isSoundAction; // @synthesize isSoundAction;
@property(nonatomic) int isSpecial; // @synthesize isSpecial;
@property(nonatomic) int packageId; // @synthesize packageId=_packageId;
- (id)pathForExtraAction;
@property(retain, nonatomic) NSString *peerAnimationName; // @synthesize peerAnimationName;
@property(retain, nonatomic) SpriteFileInfo *peerAtlasFile; // @synthesize peerAtlasFile;
@property(retain, nonatomic) SpriteFileInfo *peerJsonFile; // @synthesize peerJsonFile;
@property(retain, nonatomic) SpriteFileInfo *peerPngFile; // @synthesize peerPngFile;
@property(retain, nonatomic) NSArray *pkIds; // @synthesize pkIds=_pkIds;
@property(nonatomic) int posType; // @synthesize posType;
- (void)setLightResWithAnother:(id)arg1;
- (void)setPlayResDataWithAnother:(id)arg1;
- (void)setPreviewResDownedFlag;
@property(copy, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) UIImage *textActonIcon; // @synthesize textActonIcon;
@property(retain, nonatomic) NSString *textImgUrl; // @synthesize textImgUrl;
@property(nonatomic) long long textType; // @synthesize textType;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic) long long use; // @synthesize use;
- (void)setValueWithAnother:(id)arg1;
@property(nonatomic) unsigned int version; // @synthesize version;
- (_Bool)singleAction;
- (void)wearLightRes;
- (void)wearLightResWithNeedVersionCheck:(_Bool)arg1;
- (void)wearLightResWithVersionCheck;
- (void)wearPlayRes;
- (void)wearShowIcon;

@end


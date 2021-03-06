//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYStorage, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, QQLockDictionary;

@interface NSFAnimationManager : NSObject
{
    NSString *_currentAIOKey;
    _Bool _currentIsGroup;
    unsigned long long _currentEnterTime;
    _Bool _isPlaying;
    NSMutableArray *_downloadList;
    LYStorage *_storage;
    NSObject<OS_dispatch_queue> *_downloadQueue;
    _Bool _isSendFolwerFromMulRac;
    NSString *_processString;
    QQLockDictionary *_playListDictForC2C;
    QQLockDictionary *_playListDictForGroup;
    QQLockDictionary *_groupJoinTimeDict;
    QQLockDictionary *_playListForMULRAC;
}

+ (id)basicPath;
+ (id)bigPath:(long long)arg1;
+ (void)deletePackage;
+ (id)getInstance;
+ (id)packagePath:(long long)arg1;
+ (id)zipPath:(long long)arg1;
- (void).cxx_destruct;
- (void)AIOWillAppear:(id)arg1 isGroup:(_Bool)arg2;
- (void)AIOWillDisappear:(_Bool)arg1;
- (id)AssemblingAVMaskFlowerModelKey:(id)arg1;
- (void)addToMULRACPlaylist:(id)arg1;
- (void)addToPlaylist:(id)arg1;
- (void)applicationWillEnterBackground;
- (void)closeAllAnimation;
- (void)dealloc;
- (void)didDownloadFail:(id)arg1;
- (id)getCurrentPlayListDict;
- (id)getPlayListDict:(_Bool)arg1;
@property(retain, nonatomic) QQLockDictionary *groupJoinTimeDict; // @synthesize groupJoinTimeDict=_groupJoinTimeDict;
- (id)init;
- (_Bool)isAnimationViewControllerExist;
- (void)logoutBeforeNotification;
@property(retain, nonatomic) QQLockDictionary *playListDictForC2C; // @synthesize playListDictForC2C=_playListDictForC2C;
@property(retain, nonatomic) QQLockDictionary *playListDictForGroup; // @synthesize playListDictForGroup=_playListDictForGroup;
@property(retain, nonatomic) QQLockDictionary *playListForMULRAC; // @synthesize playListForMULRAC=_playListForMULRAC;
@property(copy, nonatomic) NSString *processString; // @synthesize processString=_processString;
- (void)recordGroupJoinTime:(id)arg1 joinTime:(unsigned long long)arg2;
- (void)removePlayListMULRACWithKey:(id)arg1;
- (void)removePlayListWithKey:(id)arg1 isGroup:(_Bool)arg2;
- (void)reportWithOpType:(id)arg1 opCount:(int)arg2;
- (void)savePlayListDictToFile;
- (void)sortPlayListWhenEnterAIO;
- (void)startAnimationIfNeed;
- (void)startAnimationRightNowAtCurrentWindow;
- (void)startDownload:(id)arg1;
- (void)unZipPacket:(id)arg1;

@end


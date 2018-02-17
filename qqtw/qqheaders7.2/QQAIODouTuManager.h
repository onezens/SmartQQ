//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, QQAIODouTuViewController, QQBaseChatViewController;

@interface QQAIODouTuManager : NSObject
{
    NSMutableArray *_douTuRecords;
    QQAIODouTuViewController *_doutuVC;
    NSMutableDictionary *_discussStates;
    NSMutableDictionary *_groupStates;
    NSMutableDictionary *_c2cStates;
    NSMutableDictionary *_discussDuiStates;
    NSMutableDictionary *_groupDuiStates;
    NSMutableDictionary *_c2cDuiStates;
    NSMutableDictionary *_discussComboRecord;
    NSMutableDictionary *_groupComboRecord;
    NSMutableDictionary *_c2cComboRecord;
    NSMutableDictionary *_discussDuiAnimated;
    NSMutableDictionary *_groupDuiAnimated;
    NSMutableDictionary *_c2cDuiAnimated;
    NSMutableArray *_duiButtonImages;
    unsigned long long _lastLoadTime;
    _Bool _enableDouTu;
    _Bool _userSettingEnabled;
    QQBaseChatViewController *_chatViewController;
    unsigned long long _latestRecordTime;
    unsigned long long _doutuTriggerInterval;
    unsigned long long _comboTriggerInterval;
    unsigned long long _comboAnimDuration;
    unsigned long long _comboKeepTime;
    id <QQAIODouTuComboDelegate> _delegate;
    NSString *_doutuResPath;
}

+ (void)clearCacheFiles;
+ (id)directoryForDoutuResources;
+ (id)directoryForPicIsThumb:(_Bool)arg1;
+ (void)downloadDouTu:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
+ (_Bool)fileExistForPicInfo:(id)arg1 isThumb:(_Bool)arg2;
+ (id)filePathForPicInfo:(id)arg1 isThumb:(_Bool)arg2;
+ (id)fileUrlForDouTuPicInfo:(id)arg1 isThumb:(_Bool)arg2;
+ (_Bool)isDouTuMessageModel:(id)arg1;
+ (id)keyForURL:(id)arg1;
+ (void)sendDouTu:(id)arg1;
+ (id)sharedInstance;
+ (_Bool)unzipFile:(id)arg1 toFolder:(id)arg2 fileInfoDic:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (unsigned long long)checkLastThreeDouTuMessage:(id)arg1;
- (void)cleanupDouTuStates;
@property(nonatomic) unsigned long long comboAnimDuration; // @synthesize comboAnimDuration=_comboAnimDuration;
@property(nonatomic) unsigned long long comboKeepTime; // @synthesize comboKeepTime=_comboKeepTime;
@property(nonatomic) unsigned long long comboTriggerInterval; // @synthesize comboTriggerInterval=_comboTriggerInterval;
@property(nonatomic) __weak id <QQAIODouTuComboDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *doutuResPath; // @synthesize doutuResPath=_doutuResPath;
@property(nonatomic) unsigned long long doutuTriggerInterval; // @synthesize doutuTriggerInterval=_doutuTriggerInterval;
- (void)downloadDouTuResourceZipUrl:(id)arg1 md5:(id)arg2;
@property(nonatomic) _Bool enableDouTu; // @synthesize enableDouTu=_enableDouTu;
- (id)getDoutuComboRecord:(id)arg1;
- (id)getDuiButtonImages;
- (unsigned long long)getLastDouTuStateActivatedTime:(id)arg1;
- (unsigned long long)getLastDuiStateTime:(id)arg1;
- (void)hideDouTuScrollPanel:(_Bool)arg1;
- (id)init;
- (void)initDouTuStatesWithMessageModels:(id)arg1;
- (_Bool)isDouTuEnabled;
@property(nonatomic) unsigned long long latestRecordTime; // @synthesize latestRecordTime=_latestRecordTime;
- (void)layoutDouTuPanelWithOriginY:(double)arg1;
- (void)onAccountChanged;
- (void)popupDouTuScrollPanel;
- (void)reinitDouTuManagerStatesWithVC:(id)arg1;
- (void)setDouTuComboRecord:(id)arg1 withRecord:(id)arg2;
- (void)setDouTuEntranceMessage:(id)arg1 animated:(_Bool)arg2;
- (void)setLastDouTuStateActivatedTime:(id)arg1;
- (void)setLastDouTuStateActivatedTime:(id)arg1 withTime:(unsigned long long)arg2;
- (void)setLastDuiStateTime:(id)arg1;
- (void)setLastDuiStateTime:(id)arg1 withTime:(unsigned long long)arg2;
- (void)setResUrl:(id)arg1 withMd5:(id)arg2;
@property(nonatomic) _Bool userSettingEnabled; // @synthesize userSettingEnabled=_userSettingEnabled;
- (_Bool)shouldAnimateDouTuEntrance:(id)arg1;
- (_Bool)shouldDisplayDouTuEntrance:(id)arg1;
- (void)showPanelInternal;
- (void)triggerComboWithUin:(id)arg1 count:(unsigned long long)arg2 comboed:(_Bool)arg3 time:(unsigned long long)arg4;
- (void)updateDouTuStatesWithMessage:(id)arg1;

@end


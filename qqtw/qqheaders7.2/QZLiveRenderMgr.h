//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCTempManagerDelegate.h"
#import "QZAnimEffectMgrDelegate.h"
#import "QZFunLiveMgrDelegate.h"

@class NSArray, NSDictionary, NSString, QZAnimEffectItem, QZRenderBuffer;

@interface QZLiveRenderMgr : NSObject <MCTempManagerDelegate, QZFunLiveMgrDelegate, QZAnimEffectMgrDelegate>
{
    NSArray *_filterTempArray;
    NSDictionary *_filterTempDic;
    float _curBeautifyLevel;
    NSString *_curFilterPath;
    QZAnimEffectItem *_curEffectItem;
    QZRenderBuffer *_renderBuf;
    NSString *_smotthingFilterPath;
    long long _renderStatus;
    CDUnknownBlockType _useAnimEffectCallback;
    CDUnknownBlockType _downloadCallback;
    _Bool _beautyPanelIsPopUpped;
    double _lastCallbackTime;
    _Bool _shouldReloadFilterList;
    CDUnknownBlockType _pituResStatusCallback;
    long long _pituResPullReTryCount;
    int _beauty_server_ctl;
    _Bool _isUseBeautify30;
    int _funchatReportFlag;
}

+ (id)renderThread;
+ (void)runTasks;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)allowUseAnimEffect;
- (_Bool)allowUseFilter;
- (void)callbackPituStatus:(long long)arg1;
- (void)checkPituIsReady;
- (void)didBecomeActive:(id)arg1;
- (void)didBecomeActiveEx;
- (void)doRender:(id)arg1;
- (void)doSelected:(id)arg1 param:(id)arg2;
- (void)doSelectedEx:(id)arg1;
- (_Bool)downloadAnimEffect:(id)arg1;
- (void)downloadCallback:(id)arg1;
- (void)downloadResourceFail:(id)arg1;
- (void)downloadResourceFinish:(id)arg1;
- (void)faceDetectHideTips;
- (void)faceDetectShowTips:(id)arg1 withDuration:(double)arg2;
- (id)getAnimEffectList;
- (id)getFilterList;
- (id)getSmotthingPath;
- (void)handleFaceOffDataDownloadResult:(id)arg1;
- (void)handleYouTuDataDownloadResult:(id)arg1;
- (void)hideFaceTips;
- (id)init;
- (void)insertGridItem:(id)arg1;
- (void)loadFilterList;
- (void)loadFilterListEx;
- (void)onAVFunChatSelectDecorateItem:(id)arg1 bindFilterPath:(id)arg2;
- (void)onSliderValueEndChange;
- (_Bool)pituIsReady;
- (void)prepareBeautifyEngine;
- (void)readyForUse;
- (void)readyForUseEx;
- (void)reloadYouTuData;
- (_Bool)renderCamBuffer:(char *)arg1 bufferSize:(unsigned long long)arg2 width:(unsigned long long)arg3 heightY:(unsigned long long)arg4;
- (_Bool)renderStatusIsReady;
- (void)retrieveAll;
- (void)retrieveAllEx;
- (void)setBeautyLevel:(id)arg1;
- (void)setBeautyPanelState:(_Bool)arg1;
- (void)setCameraStubView:(id)arg1;
- (void)setCurrFilterPath:(id)arg1;
- (void)setCurrentTempleItem:(id)arg1;
- (void)setReportFlag:(long long)arg1 isOpen:(_Bool)arg2;
- (void)setSmotthing;
- (void)setupAnimEffectDownloadCallback:(CDUnknownBlockType)arg1;
- (void)setupPituResStatusCallback:(CDUnknownBlockType)arg1;
- (void)showFaceTipsIfNeed;
- (void)updateFilterSelTo:(id)arg1;
- (_Bool)useAnimEffect:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)useBeauty:(float)arg1 param:(id)arg2;
- (_Bool)useFilter:(id)arg1 param:(id)arg2;
- (float)validBeautifyLevel:(float)arg1;
- (void)willResignActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


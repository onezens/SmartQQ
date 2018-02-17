//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GFInteractGiftHandlerDelegate.h"

@class NSMutableArray, NSMutableDictionary, QQBaseChatModel, QQBaseChatViewController, QQGroupDeliverGiftAnimationViewController, QQGroupDeliverGiftModel, QQLockDictionary, QQVideoGiftAnimator;

@interface QQGroupDeliverGiftAnimationManager : NSObject <GFInteractGiftHandlerDelegate>
{
    NSMutableDictionary *_allList;
    NSMutableDictionary *_playList;
    QQLockDictionary *_handlers;
    _Bool _isPlaying;
    _Bool _isAIOing;
    QQGroupDeliverGiftModel *_currentPlayingGiftModel;
    NSMutableArray *_downloadList;
    NSMutableArray *_currentPlayList;
    QQBaseChatModel *_currentChatModel;
    NSMutableArray *_pushSeqs;
    QQBaseChatViewController *_chatDelegate;
    QQVideoGiftAnimator *_animator;
    _Bool _waitCheck;
    _Bool _playingPicShow;
    _Bool _isOnGroupVideo;
    QQGroupDeliverGiftAnimationViewController *_viewController;
}

+ (id)groupAnimationDirPath;
+ (_Bool)isAnimationViewControllerExist;
+ (id)sharedAnimationManger;
- (void).cxx_destruct;
- (void)AIOWillAppearOrDisappear:(_Bool)arg1 groupCode:(id)arg2 delegate:(id)arg3;
- (void)addToPlaylist:(id)arg1 isReplay:(_Bool)arg2;
- (void)chatViewControllerDidAppear:(id)arg1;
- (void)chatViewControllerDidDisppear:(id)arg1;
- (_Bool)checkIfAnimationIsVaildOrNot:(id)arg1;
- (void)checkOldAnimationDir;
- (void)closeAllAnimation;
- (void)dealloc;
- (void)deleteOldAnimationDir:(id)arg1;
- (void)didDownloadFail:(id)arg1;
- (id)getNewGroupDeliverGiftAnimationViewController;
- (void)handler:(id)arg1 didFailWithError:(id)arg2;
- (void)handlerDidCheckFinishedGiftModel:(id)arg1;
- (void)handlerDidFinish:(id)arg1;
- (void)handlerDidPlayingGiftModel:(id)arg1;
- (id)handlerForGroupCode:(id)arg1;
- (void)handlerWillStartAnimation:(id)arg1;
- (_Bool)hasAnimation;
- (id)init;
- (_Bool)isDownloadingAnimationPackageWithModel:(id)arg1;
@property(nonatomic) _Bool isOnGroupVideo; // @synthesize isOnGroupVideo=_isOnGroupVideo;
- (void)onAccountChanged:(id)arg1;
- (void)onDownLoadPicShowAsset:(id)arg1;
- (void)onDownLoadVideoAsset:(id)arg1;
- (void)onGroupMessageReadNotify:(id)arg1;
- (void)onGroupMessageReadedReportNotify:(id)arg1;
- (void)onHandleAccountLogout:(id)arg1;
- (_Bool)playGiftAnimationImmediately:(id)arg1;
- (_Bool)playGiftAnimationInTmpList:(id)arg1;
- (void)playGiftAnimationWithModel:(id)arg1;
- (void)playNextGiftAnimation;
- (void)removePlayListWithGroupCode:(id)arg1;
- (void)renameAvatar:(id)arg1;
@property(retain, nonatomic) QQGroupDeliverGiftAnimationViewController *viewController; // @synthesize viewController=_viewController;
- (id)shareQueue;
- (void)sortPlayList;
- (void)startAnimation;
- (void)startDownload:(id)arg1;
- (void)stopCurrentAnimationAndPause;
- (void)swipeRightForGroupAIOToBackend;
- (void)unZipPacket:(id)arg1;

@end

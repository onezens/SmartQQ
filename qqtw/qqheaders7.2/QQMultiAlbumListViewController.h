//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MQzoneAlbumWithQQPhotoPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSNumber, NSString, QQAlbumLoadingView, QQAsset, QQNoPhotoView, UITableView;

@interface QQMultiAlbumListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MQzoneAlbumWithQQPhotoPickerViewControllerDelegate>
{
    id <IAlbumService> _albumService;
    NSMutableArray *_assetGroups;
    int _assetsFilter;
    _Bool _isFirstInit;
    _Bool _isLoading;
    _Bool _isLoadFinished;
    UITableView *_tableView;
    _Bool _isInFileCenter;
    _Bool _isIntoImageListView;
    NSMutableArray *_selectedList;
    NSMutableArray *_deselectedList;
    QQAsset *_lastSelectedAsset;
    _Bool _isInShortVideo;
    NSNumber *_videoFileSizeLimit;
    _Bool _isListFromPreView;
    int _xo;
    QQNoPhotoView *_noPhotoView;
    _Bool _viewVisible;
    _Bool _isFirstIn;
    QQAlbumLoadingView *_loadingView;
    NSMutableArray *_albumCellsData;
    _Bool _isSupportFlashPic;
    _Bool _isShowSend2TroopAlbumBar;
    _Bool _isNeedSpecialLogicForAVFloatBar;
    _Bool _showQzoneAlbum;
    _Bool _disablePhotoPreviewOnClick;
    _Bool _isHealthSports;
    _Bool _isFlash;
    _Bool _isWeiyunBackup;
    _Bool _isSupportMix;
    long long _curTroopCode;
    NSMutableArray *_selectedAlbumBarInfo;
    unsigned long long _qzoneAlbumNum;
    NSMutableArray *_selectListFromQzone;
    struct CGSize _healthSportsMinSize;
}

- (void)addOnePhotoFromQzone:(id)arg1;
- (void)applyFilter:(id)arg1;
- (void)buildAlbumData;
- (void)buildHealthSportsAlbumData;
- (void)createNoPhotoView;
@property(nonatomic) long long curTroopCode; // @synthesize curTroopCode=_curTroopCode;
- (void)dealloc;
- (void)delayReloadTable:(id)arg1;
@property(nonatomic) _Bool disablePhotoPreviewOnClick; // @synthesize disablePhotoPreviewOnClick=_disablePhotoPreviewOnClick;
- (void)filterAlbumList:(id)arg1;
- (int)getAssetGroupIndex:(id)arg1;
- (void)gotoImageTableViewController:(id)arg1 animated:(_Bool)arg2;
- (void)gotoQZoneAlbumListViewController;
@property(nonatomic) struct CGSize healthSportsMinSize; // @synthesize healthSportsMinSize=_healthSportsMinSize;
- (id)init;
@property(nonatomic) _Bool isFlash; // @synthesize isFlash=_isFlash;
@property(nonatomic) _Bool isHealthSports; // @synthesize isHealthSports=_isHealthSports;
@property(nonatomic) _Bool isNeedSpecialLogicForAVFloatBar; // @synthesize isNeedSpecialLogicForAVFloatBar=_isNeedSpecialLogicForAVFloatBar;
@property(nonatomic) _Bool isShowSend2TroopAlbumBar; // @synthesize isShowSend2TroopAlbumBar=_isShowSend2TroopAlbumBar;
@property(nonatomic) _Bool isSupportFlashPic; // @synthesize isSupportFlashPic=_isSupportFlashPic;
@property(nonatomic) _Bool isSupportMix; // @synthesize isSupportMix=_isSupportMix;
- (_Bool)isSupportRightDragToGoBack;
@property(nonatomic) _Bool isWeiyunBackup; // @synthesize isWeiyunBackup=_isWeiyunBackup;
- (void)loadGroupsFromLibrary;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (void)pushImgaeTableView;
@property(nonatomic) unsigned long long qzoneAlbumNum; // @synthesize qzoneAlbumNum=_qzoneAlbumNum;
- (void)refreshNavigationTitle;
- (void)reloadTableView;
- (void)removeOnePhotoImageFromQzone:(id)arg1;
@property(retain, nonatomic) NSMutableArray *selectListFromQzone; // @synthesize selectListFromQzone=_selectListFromQzone;
@property(retain, nonatomic) NSMutableArray *selectedAlbumBarInfo; // @synthesize selectedAlbumBarInfo=_selectedAlbumBarInfo;
- (void)setAppearence;
@property(retain, nonatomic) NSMutableArray *selectedList; // @dynamic selectedList;
@property(nonatomic) _Bool showQzoneAlbum; // @synthesize showQzoneAlbum=_showQzoneAlbum;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toSystemSettingView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) int assetsFilter; // @dynamic assetsFilter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *deselectedList; // @dynamic deselectedList;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInShortVideo; // @dynamic isInShortVideo;
@property(nonatomic) _Bool isIntoImageListView; // @dynamic isIntoImageListView;
@property(nonatomic) _Bool isListFromPreView; // @dynamic isListFromPreView;
@property(retain, nonatomic) QQAsset *lastSelectedAsset; // @dynamic lastSelectedAsset;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *videoFileSizeLimit; // @dynamic videoFileSizeLimit;

@end


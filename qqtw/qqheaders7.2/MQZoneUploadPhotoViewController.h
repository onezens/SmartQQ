//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "MQZGroupPhotoesPickerDelegate.h"
#import "MQZMultiImagePickerWrapperDelegate.h"
#import "MQZonePhotoEditInputCellDelegate.h"
#import "MQZonePhotoViewDelegate.h"
#import "MQzoneAlbumPickerDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MQZMultiImagePickerWrapper, MQZoneMoodEditBatchGeoCell, MQZonePhotoEditInputCell, MQZonePhotoView, MQZoneSelectAlbumImageButton, MQZoneSelectQualityButton, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, QUIActionSheet, QZNotificationInfo, QZSeparatorCell, QZUGCLBSModel, QzoneFeedModel, UISwitch, UITableView, UITableViewCell, UIView;

@interface MQZoneUploadPhotoViewController : QZoneViewController <QUIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, MQZonePhotoEditInputCellDelegate, MQZMultiImagePickerWrapperDelegate, MQZonePhotoViewDelegate, MQzoneAlbumPickerDelegate, MQZGroupPhotoesPickerDelegate>
{
    NSMutableSet *_tempPhotoModelSet;
    long long _batchID;
    NSString *_clientKey;
    _Bool _needLastUseAlbum;
    long long _groupCode;
    long long _uploadFrom;
    QzoneFeedModel *_feedModel;
    NSString *_refer;
    NSString *_statistics;
    _Bool _waitForWiFi;
    _Bool _waitForNet;
    NSDictionary *_schemaParam;
    long long _uploadEntrance;
    _Bool _fromQunH5;
    id _leftClickTarget;
    _Bool _isFromthirdApp;
    NSString *_appID;
    _Bool _isCancelUpload;
    _Bool _isForwardQueryAlbum;
    QZNotificationInfo *_albumNotifyInfo;
    long long _preQuality;
    long long _shootRequestId;
    long long _qunGetBatchPhotoRequestId;
    QUIActionSheet *_actionSheet;
    long long _albumQueryState;
    _Bool _disableLBSInfo;
    NSArray *_middleGroup;
    UITableView *_tableView;
    UITableViewCell *_topCell;
    UIView *_tipsView;
    QZSeparatorCell *_albumCell;
    MQZoneSelectAlbumImageButton *_selectAlbumButton;
    QZSeparatorCell *_qualityCell;
    MQZoneSelectQualityButton *_selectQualityButton;
    QZSeparatorCell *_geoCell;
    MQZonePhotoView *_photoCell;
    MQZMultiImagePickerWrapper *_picker;
    double _maxPhotoNum;
    UISwitch *_videoQualityCtl;
    _Bool _isInputCellActive;
    long long _requestId;
    MQZonePhotoEditInputCell *_qzInputView;
    MQZoneMoodEditBatchGeoCell *_batchGeoView;
    NSIndexPath *_photoQuality;
    NSIndexPath *_videoQuality;
    QzoneFeedModel *_albumModel;
    QZUGCLBSModel *_shootLBSModel;
    long long _serverTime;
    long long _sourceLocation;
    long long _targetLocation;
    int _xo;
    _Bool _isOriginal;
    _Bool _isPresentInViewController;
    _Bool _isEditingMode;
    _Bool _isCopy;
    NSMutableArray *_photoes;
    NSMutableArray *_photoModelList;
    CDUnknownBlockType _onUploadComplete;
    long long _queryRequestId;
    SEL _leftClickSel;
    QZoneViewController *_parentVC;
    long long _currentIndex;
    long long _albumType;
    NSString *_eventTitle;
    NSString *_preUploadId;
    NSMutableDictionary *_advDict;
    NSString *_advTraceInfoForHd_Ori;
    NSString *_advTraceInfoForNormal;
}

+ (id)feedPictureFromPhotoUploadJob:(id)arg1 imageModel:(id)arg2 albumID:(id)arg3 albumAnonymity:(long long)arg4;
+ (id)getPhotoListWithQuality:(long long)arg1 compressBatchId:(long long)arg2;
+ (void)uploadAIOGroupPhoto:(long long)arg1 albumModel:(id)arg2 refer:(id)arg3 compressBatchId:(long long)arg4 quality:(long long)arg5 uploadEntrance:(long long)arg6;
+ (void)uploadGroupPhoto:(long long)arg1 photoList:(id)arg2 albumName:(id)arg3 albumID:(id)arg4 albumDesc:(id)arg5 refer:(id)arg6 clientKey:(id)arg7 batchID:(long long)arg8 compressBatchId:(long long)arg9 uploadTime:(long long)arg10 quality:(long long)arg11 waitForWiFi:(_Bool)arg12 shootInfo:(id)arg13 lbsLocationString:(id)arg14 lbsGPS:(id)arg15 fakeFeed:(_Bool)arg16 uploadEntrace:(long long)arg17 preUploadId:(id)arg18;
- (void).cxx_destruct;
- (void)MQZMultiImagePicker:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)MQZMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)MQZMultiImagePickerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addFakeVideoToVideoList:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *advDict; // @synthesize advDict=_advDict;
@property(retain, nonatomic) NSString *advTraceInfoForHd_Ori; // @synthesize advTraceInfoForHd_Ori=_advTraceInfoForHd_Ori;
@property(retain, nonatomic) NSString *advTraceInfoForNormal; // @synthesize advTraceInfoForNormal=_advTraceInfoForNormal;
- (long long)albumMaximumPhotoCount;
- (id)albumReferOfUploadEntrance:(long long)arg1;
@property(nonatomic) long long albumType; // @synthesize albumType=_albumType;
- (unsigned long long)calculateOriginalPhotoSize;
- (void)cancelBatchPhotoListRequest;
- (_Bool)checkIfCanUpload;
- (void)checkTrafficThreshold;
- (void)checkUploadScaleType;
- (void)checkUploadScaleTypeWithLoading;
- (void)clickPickerQZonePhotoButton;
- (void)configSelectAlbumButtonAlbumType;
- (void)configureAlbumModel;
- (void)configureNavigationBar;
- (void)convertDataFromLBSModel:(id)arg1;
- (id)convertToReadSourceForReport:(long long)arg1;
- (id)createFakeFeedVideo:(id)arg1;
- (void)createPhotoCell;
- (id)createPhotoUploadJob:(id)arg1 index:(long long)arg2 totolNum:(long long)arg3 openAppid:(id)arg4 ismix:(long long)arg5 isFirsPhotoHaveExif:(_Bool *)arg6;
- (id)createPhotoUploadJobFromImageModels:(id)arg1 fakeFeedPictures:(id)arg2 hasFakeFeed:(_Bool)arg3 open_appid:(id)arg4 albumAnonymity:(long long)arg5;
- (id)createVideoUploadJob:(id)arg1 index:(long long)arg2 total:(long long)arg3 ismix:(long long)arg4;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (long long)currentQualityViewStyle;
- (void)dealloc;
- (id)defaultAlbumName;
- (void)detectPhotoTagResultFromPickerModels:(id)arg1;
- (void)didFinishPickingQZonePhotoes:(id)arg1;
- (void)didSelect:(id)arg1 qualityViewStyle:(long long)arg2 PhotoQuality:(id)arg3 videoQuality:(id)arg4 withTitle:(id)arg5;
- (void)didSelectAlbum:(id)arg1;
- (void)dismissModal:(_Bool)arg1 animated:(_Bool)arg2;
- (void)enterShootInfo;
@property(retain, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
- (void)forwardAIOPhotos;
- (void)forwardCloudRecommendPhotos;
- (id)forwardDescription;
- (void)forwardGetServerTimeTimeout;
- (void)fowardGetAlbumInfoTimeout;
- (void)getAlbumInfoInWorkingState;
- (id)getPictureFromPhotoModel:(id)arg1;
- (void)handleClickRightButton;
- (void)handleClickRightButtonForGroupZone;
- (void)handleClickRightButtonForQQZone;
- (void)handleClickRightButtonForQuoteToQzone;
- (void)handleQzonePhotoQuoteToQzone;
- (double)heightForPhotoView;
- (void)hideKeyboard;
- (id)init;
- (void)initNotificationObservers:(id)arg1;
- (id)initWithAlbumModel:(id)arg1 uploadFrom:(long long)arg2;
- (id)initWithGroupCode:(long long)arg1 albumModel:(id)arg2 uploadFrom:(long long)arg3;
- (id)initWithGroupCode:(long long)arg1 uploadFrom:(long long)arg2;
- (id)initWithPhotoModels:(id)arg1 sourceLocation:(long long)arg2 targetLocation:(long long)arg3;
- (id)initWithUploadFrom:(long long)arg1;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
@property(nonatomic) _Bool isCopy; // @synthesize isCopy=_isCopy;
@property(nonatomic) _Bool isEditingMode; // @synthesize isEditingMode=_isEditingMode;
- (_Bool)isForwardPhoto;
- (_Bool)isForwardQZone;
- (_Bool)isNeedFakeFeed;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(nonatomic) _Bool isPresentInViewController; // @synthesize isPresentInViewController=_isPresentInViewController;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isTargetQZone;
- (void)leftButtonClick:(id)arg1;
@property(nonatomic) SEL leftClickSel; // @synthesize leftClickSel=_leftClickSel;
- (void)loadView;
- (_Bool)needsQueryAlbumInfo;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onChooseQunAlbum:(id)arg1;
- (void)onForeOffLine:(id)arg1;
- (long long)onGetBatchGeoSuccessNotify:(id)arg1;
- (long long)onGetPOIListNotifyV2:(id)arg1;
- (void)onNotifyAlbumListResult:(id)arg1;
- (int)onNotifyGetPhotoCountResult:(id)arg1;
- (int)onNotifyQunGetBatchPhoto:(id)arg1;
- (long long)onQunGetTimeNotify:(id)arg1;
- (void)onRightButtonClick:(id)arg1 forEvent:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;
- (id)packVideoPhotoData:(id)arg1 index:(long long)arg2 total:(long long)arg3 isMix:(long long)arg4;
@property(nonatomic) __weak QZoneViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void)photoCellBecomeActive:(id)arg1;
- (void)photoCellChangeHeight:(id)arg1 heightOffset:(double)arg2;
- (void)photoCellCheckPhotoState:(id)arg1 photoList:(id)arg2;
- (void)photoCellDidPressPlusButton:(id)arg1;
@property(retain, nonatomic, setter=setPhotoModelList:) NSMutableArray *photoModelList; // @synthesize photoModelList=_photoModelList;
@property(retain, nonatomic, setter=setPhotoes:) NSMutableArray *photoes; // @synthesize photoes=_photoes;
@property(copy, nonatomic) NSString *preUploadId; // @synthesize preUploadId=_preUploadId;
- (void)queryAlbumInfo:(_Bool)arg1;
- (void)queryPhotoCountInAlbum:(id)arg1 albumType:(id)arg2;
@property(nonatomic) long long queryRequestId; // @synthesize queryRequestId=_queryRequestId;
- (void)qunGetTime:(_Bool)arg1;
- (void)readyUploadForGroupZone;
- (void)realhandleClickRightButton;
- (void)reloadGeoCell;
- (void)reloadPhotoCells;
- (_Bool)requestAlbumList;
- (void)requestQBossPhotoAdvWithId:(int)arg1;
- (void)resetPhotoPOIInfo;
- (void)resetRightButtonState;
- (id)saveThumbImage:(id)arg1 uploadTime:(long long)arg2;
- (void)selectAlbum:(id)arg1 forEvent:(id)arg2;
- (void)selectQuality:(id)arg1 forEvent:(id)arg2;
- (id)selectedAlbumID;
- (id)selectedAlbumType;
- (void)setPhotoPOIInfo:(id)arg1;
- (void)setUploaFrom:(long long)arg1;
- (void)setWeatherInfo:(id)arg1;
- (void)setupAlbumCell;
- (void)setupGeoCell;
- (void)setupInputView;
- (void)setupQualityCell;
- (void)setupTipLabel;
- (void)setupTopCell;
- (void)showEmptyAlbumTips;
- (void)showFullAlbumTips;
- (void)startParseImageGps:(id)arg1;
- (void)startPreUpload:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateFakeAlbumInAlbumListIfNeeded:(id)arg1;
- (void)updateLastSelectAlbumInfo:(id)arg1;
- (void)updatephotoCell:(id)arg1 photoList:(id)arg2;
- (void)uploadPhotosForGroupZone;
- (void)uploadPhotosForGroupZone_local;
- (void)uploadPhotosForGroupZone_quote;
- (void)uploadPhotosForQQZone;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) QzoneFeedModel *albumModel; // @dynamic albumModel;
@property(retain, nonatomic) NSString *appID; // @dynamic appID;
@property(retain, nonatomic) MQZoneMoodEditBatchGeoCell *batchGeoView; // @dynamic batchGeoView;
@property(nonatomic) long long batchID; // @dynamic batchID;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @dynamic feedModel;
@property(nonatomic) _Bool fromQunH5; // @dynamic fromQunH5;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFromthirdApp; // @dynamic isFromthirdApp;
@property(nonatomic) id leftClickTarget; // @dynamic leftClickTarget;
@property(nonatomic) _Bool needLastUseAlbum; // @dynamic needLastUseAlbum;
@property(retain, nonatomic) NSIndexPath *photoQuality; // @dynamic photoQuality;
@property(retain, nonatomic) MQZonePhotoEditInputCell *qzInputView; // @dynamic qzInputView;
@property(copy, nonatomic) NSString *refer; // @dynamic refer;
@property(retain, nonatomic) NSDictionary *schemaParam; // @dynamic schemaParam;
@property(nonatomic) long long serverTime; // @dynamic serverTime;
@property(nonatomic) long long sourceLocation; // @dynamic sourceLocation;
@property(copy, nonatomic) NSString *statistics; // @dynamic statistics;
@property(readonly) Class superclass;
@property(nonatomic) long long targetLocation; // @dynamic targetLocation;
@property(nonatomic) long long uploadEntrance; // @dynamic uploadEntrance;
@property(nonatomic) long long uploadFrom; // @dynamic uploadFrom;
@property(retain, nonatomic) NSIndexPath *videoQuality; // @dynamic videoQuality;
@property(nonatomic) _Bool waitForNet; // @dynamic waitForNet;
@property(nonatomic) _Bool waitForWiFi; // @dynamic waitForWiFi;

@end


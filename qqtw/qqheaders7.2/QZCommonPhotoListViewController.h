//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZPhotoModuleCommonPhotoListViewController.h"

#import "MQzoneAlbumPickerDelegate.h"
#import "QZAlbumCoverViewDelegate.h"
#import "QZAlbumPasswordPickerDelegate.h"
#import "QZCommonPhotoCellDelegate.h"
#import "QZCommonPhotoMoreViewDelegate.h"
#import "QZPhotoModuleCellDelegate.h"
#import "QZPhotoModuleDownloaderInterfaceDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class ETQZFont, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZAlbumCoverView, QZJPhotoAlbum, QZJPhotoGetAlbumRsp, QZPhotoTimeLineView, QZSuggestUploadImageViewCell, QzoneAlbumTemplate, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface QZCommonPhotoListViewController : QZPhotoModuleCommonPhotoListViewController <QZAlbumCoverViewDelegate, QZPhotoModuleDownloaderInterfaceDelegate, QZAlbumPasswordPickerDelegate, MQzoneAlbumPickerDelegate, UIViewControllerPreviewingDelegate, QZCommonPhotoMoreViewDelegate, QZCommonPhotoCellDelegate, QZPhotoModuleCellDelegate>
{
    NSString *_attachInfo;
    NSString *_coverUrl;
    NSMutableArray *_collectionList;
    NSMutableArray *_sectionList;
    _Bool _hasMore;
    QZJPhotoAlbum *_albumInfo;
    int _albumOpmask;
    _Bool _shouldRefresh;
    _Bool _isAlbumSkinChanged;
    _Bool _albumTypeChange;
    UIImageView *_emptyIndividualImgView;
    double _tableViewHeight;
    QZAlbumCoverView *_albumCoverView;
    NSString *_jumpUrl;
    long long _albumCoverRequestId;
    UIImageView *_backgroundView;
    NSMutableDictionary *_modifyDescAtDict;
    _Bool _hasShowUploadTips;
    ETQZFont *_etFont;
    UIView *_operationBottomBar;
    UIButton *_forwardBtn;
    UIButton *_likeBtn;
    UILabel *_likeLabel;
    UILabel *_commentLabel;
    NSString *_individualIconURL;
    UIImage *_individualIcon;
    long long _joinAlbumRequstId;
    long long _loveSpaceStatusRequestId;
    QZSuggestUploadImageViewCell *_suggestUploadImageViewCell;
    _Bool _canLoadSuggestUploadImageCell;
    _Bool _canShowUnTimeCell;
    NSMutableArray *_cacheSuggestInfo;
    QZJPhotoGetAlbumRsp *_albumResponse;
    long long _errorCode;
    _Bool _firstRequest;
    NSMutableArray *_otherPreloadURLs;
    long long _lastAnonymity;
    _Bool _shouldLoadPluginAfterAppeared;
    _Bool _hasDidAppeared;
    NSDictionary *_userParamForCSPlugin;
    double _layoutDrawingBeginTime;
    _Bool _hasLoadAlbumCache;
    long long _visitorNum;
    long long _likeNum;
    long long _commentNum;
    NSArray *_recommendAlbumList;
    NSString *_recommendAlbumTitle;
    double _oldScrollOffsetY;
    NSString *_loveSpaceAdvUrl;
    NSString *_loveSpaceJumpUrl;
    NSString *_loveSpaceQbossTraceInfo;
    _Bool _hasLoadedSugguestOCS;
    _Bool _hasEdited;
    _Bool _shouldHideSelectAll;
    _Bool _shouldShowToast;
    _Bool _isOwner;
    NSMutableArray *_suggestAssets;
    NSMutableArray *_allSuggestAssetsIdentifier;
    long long _photoListRequestId;
    QZPhotoTimeLineView *_timeLineView;
    UIButton *_timeLineButton;
    UIImageView *_gaussImageView;
    long long _maxPhotoNumInQzone;
    UIImage *_coverImage;
    QzoneAlbumTemplate *_albumTemplate;
    NSString *_shareAlbumInviteKey;
}

+ (id)photoListViewCtr:(id)arg1 status:(long long)arg2 param:(id)arg3;
- (void).cxx_destruct;
- (void)addComment;
- (void)addFakePhotoList:(id)arg1;
- (void)addFakePhotosFromSendBox;
- (void)addFakeVideoList:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addRecommendAlbumToCollectionList:(id)arg1 title:(id)arg2;
- (void)afterViewDidAppear;
@property(retain, nonatomic) QzoneAlbumTemplate *albumTemplate; // @synthesize albumTemplate=_albumTemplate;
@property(retain, nonatomic) NSMutableArray *allSuggestAssetsIdentifier; // @synthesize allSuggestAssetsIdentifier=_allSuggestAssetsIdentifier;
- (void)bigEventModifyRequest:(id)arg1;
- (id)bottomBarArray;
- (id)cellForEditStatus:(id)arg1 tableView:(id)arg2;
- (id)cellForNormalStatus:(id)arg1 tableView:(id)arg2;
- (void)checkFootViewState;
- (void)clearNavigationBarDidBecomeOpaque;
- (void)clearNavigationBarDidBecomeTransparent;
- (long long)convertQbossTypeToAnonymity:(long long)arg1;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (void)createAlbumInfoFromFeedModel:(id)arg1 param:(id)arg2;
- (void)createETFont:(long long)arg1 fontUrl:(id)arg2 fontName:(id)arg3;
- (void)createEditBottomBar;
- (void)createForWardBottomBar;
- (void)createHeaderView;
- (void)createMoreView;
- (void)createSuggestUploadImageViewCell;
- (long long)currentLoadedPhotosCount;
- (void)dealloc;
- (void)deletePhoto:(id)arg1;
- (void)didDeletePhotos:(id)arg1;
- (void)didModifyAlbum:(id)arg1;
- (void)didModifyAlbumBigEvent:(id)arg1;
- (void)didMovePhotos:(id)arg1;
- (void)didSelectAlbum:(id)arg1;
- (void)downloadLoversAlbumFont;
- (id)emptyCell:(id)arg1;
- (void)enterManageMode:(_Bool)arg1;
- (void)etFontChanged:(id)arg1;
- (void)fakeVideoTimeOut;
- (long long)feedPictureCount;
- (id)fetchUserShareClentAttr:(id)arg1 uin:(long long)arg2;
- (void)forwardButtonClick:(id)arg1;
- (void)forwardPhoto;
@property(retain, nonatomic) UIImageView *gaussImageView; // @synthesize gaussImageView=_gaussImageView;
- (id)getAnIndividualAlbumPhotoEmptyCellForTableView:(id)arg1;
- (id)getAnPhotoEmptyCellForTableView:(id)arg1;
- (void)getLoveSpaceQbossAdv;
- (id)getReportStrWithAnonymity:(long long)arg1;
- (void)goToLikeList;
- (void)goToLoveSpace;
- (void)gotoEditViewController;
- (void)gotoEditViewController:(long long)arg1;
- (void)handleClickLoverAvatar:(long long)arg1 nick:(id)arg2;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
- (_Bool)hasMoreUntimePhotos;
- (_Bool)hasNoAlbumCover;
- (_Bool)hasNoFeeds;
- (_Bool)hideVideoList;
- (id)init;
- (void)initNotificationObservers:(id)arg1;
- (id)initWithFeedModel:(id)arg1 status:(long long)arg2 param:(id)arg3;
- (id)initWithJumpUrl:(id)arg1;
- (void)inviteLover;
- (_Bool)isOperationInConfigArray:(long long)arg1;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
- (_Bool)isThemeAlbum;
- (_Bool)isTransparentRefreshControl;
- (void)jumpToClickedEvent:(id)arg1;
- (id)jumpUrlURLParam;
- (void)likeAlbum:(_Bool)arg1;
- (void)loadFakeVideoList;
- (void)loadOCSPlusgin;
- (id)loadingCell:(id)arg1;
@property(nonatomic) long long maxPhotoNumInQzone; // @synthesize maxPhotoNumInQzone=_maxPhotoNumInQzone;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddComment;
- (void)onAddFakeVideoNotify:(id)arg1;
- (void)onAlbumSkinSet:(id)arg1;
- (void)onBgButtonClick:(id)arg1;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onCLickMaskView:(id)arg1;
- (void)onClickAdvButton:(id)arg1 shownKey:(id)arg2;
- (void)onClickAlbumCover;
- (void)onClickAlbumCover:(id)arg1;
- (void)onClickAlbumLoverHeart;
- (void)onClickBottomLikeBtn:(id)arg1;
- (void)onClickComment;
- (void)onClickCommentButton:(id)arg1;
- (void)onClickJoinBtn;
- (void)onClickLike;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickManageUntime;
- (void)onClickMenuBtn:(id)arg1 itemType:(long long)arg2;
- (void)onClickMoreBtn;
- (void)onClickMoreView:(id)arg1 itemType:(long long)arg2;
- (void)onClickPhotoDescModify:(id)arg1;
- (void)onClickRightMoreBtn:(id)arg1;
- (void)onClickShareUserView;
- (void)onClickUploadBtn;
- (void)onClickVisitorBtn;
- (void)onCommentNotify:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)onEditBatchPhotoNotify:(id)arg1;
- (void)onFakeFeedNotify:(id)arg1;
- (int)onGetAlbumNotify:(id)arg1;
- (int)onGetPhotoListNotify:(id)arg1;
- (void)onGetSpaceRightNotify:(id)arg1;
- (void)onGetTimeLinePhotoListNotify:(id)arg1;
- (_Bool)onHasMore;
- (int)onJoinAlbumNotify:(id)arg1;
- (void)onLikeNotify:(id)arg1;
- (_Bool)onLoadMore;
- (void)onNotifyDeleteAlbum:(id)arg1;
- (void)onNotifyForward:(id)arg1;
- (long long)onNotifyShareOutsiteOperation:(id)arg1;
- (void)onNotifyShouldRefresh:(id)arg1;
- (void)onPasswordError:(id)arg1;
- (void)onQuoteFinish:(id)arg1;
- (_Bool)onRefresh;
- (void)onRemoveFakeVideoNotify:(id)arg1;
- (void)onSelectEventPhotosToManage:(id)arg1 isSelected:(_Bool)arg2;
- (void)onSelectPhotoToBrowse:(id)arg1 btn:(id)arg2;
- (void)onSelectPhotoToManage:(id)arg1 isSelected:(_Bool)arg2;
- (void)onSuggestUploadBegin;
- (void)onUpdateAlbumCommentNotify:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (id)photoEventKey;
@property(nonatomic) long long photoListRequestId; // @synthesize photoListRequestId=_photoListRequestId;
- (id)photoModeForAblum;
- (void)pinchView:(id)arg1;
- (void)preloadURLsFromPhotoModels:(id)arg1;
- (void)refreshAfterManagement:(_Bool)arg1;
- (void)refreshPhotoList:(id)arg1;
- (void)reloadData;
- (void)removeAllObjects;
- (void)removeFakeVideoFeeds:(id)arg1 isThemeAlbum:(_Bool)arg2;
- (void)removeHintView:(id)arg1;
- (void)replaceNewPhotoListViewController;
- (void)requestAlbumCover:(_Bool)arg1;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (void)requestLikeWithPhotoModel:(id)arg1 ugcKey:(id)arg2;
- (void)requestLocalPhotoList;
- (_Bool)requestModifyTravelScene:(id)arg1 modifyModelArray:(id)arg2;
- (_Bool)requestPhotoList:(_Bool)arg1;
- (long long)restUntimeNum;
- (void)saveFakeVideoList;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedPhotoIDs;
- (void)setPhotModeForAlbum;
@property(retain, nonatomic) NSString *shareAlbumInviteKey; // @synthesize shareAlbumInviteKey=_shareAlbumInviteKey;
@property(nonatomic) _Bool shouldHideSelectAll; // @synthesize shouldHideSelectAll=_shouldHideSelectAll;
@property(nonatomic) _Bool shouldShowToast; // @synthesize shouldShowToast=_shouldShowToast;
@property(retain, nonatomic) NSMutableArray *suggestAssets; // @synthesize suggestAssets=_suggestAssets;
@property(retain, nonatomic) UIButton *timeLineButton; // @synthesize timeLineButton=_timeLineButton;
@property(retain, nonatomic) QZPhotoTimeLineView *timeLineView; // @synthesize timeLineView=_timeLineView;
- (_Bool)shouldShowOpaqueNaviationBar;
- (_Bool)shouldShowUploaders;
- (_Bool)shouldSupportPicComment;
- (void)showFakeVideoList:(_Bool)arg1;
- (void)showLoveSpaceAdv:(id)arg1 jumpUrl:(id)arg2 type:(long long)arg3 traceInfo:(id)arg4;
- (void)showNavLoadingView;
- (void)showUploadSuccessTip;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateAlbumCoverWithPoiArray:(id)arg1;
- (void)updateBottomBarState:(_Bool)arg1;
- (void)updateCoverViewUploadBtn;
- (void)updateFeedModelWithAlbumInfo:(id)arg1;
- (void)updateFeedModelWithShareInfo:(id)arg1;
- (void)updateHeaderView;
- (void)updateLikeNum:(id)arg1;
- (void)updateLoversAlbumFont:(id)arg1;
- (void)updateOperationBarBrowserMode;
- (void)updateOperationBottomBar;
- (void)updateParamForChild:(id)arg1;
- (void)updatePhotoModeForNormalStatus;
- (void)updateSectionList;
- (void)updateShareUserSelectedList:(id)arg1;
- (void)updateTimeLineViewWithHeaderList:(id)arg1 eventDic:(id)arg2 timeLineArray:(id)arg3;
- (void)updateWithQBossHint:(id)arg1 iconURL:(id)arg2 duration:(double)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

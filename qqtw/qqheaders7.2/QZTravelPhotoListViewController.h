//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZThemePhotoListViewController.h"

#import "QZCommonPhotoCellDelegate.h"
#import "QZPhotoModuleLBSInterfaceDelegate.h"
#import "QZPhotoModulePoiModifyInterfaceDelegate.h"

@class NSArray, NSString;

@interface QZTravelPhotoListViewController : QZThemePhotoListViewController <QZPhotoModulePoiModifyInterfaceDelegate, QZPhotoModuleLBSInterfaceDelegate, QZCommonPhotoCellDelegate>
{
    NSArray *_poiArray;
    long long _modifyTravelSceneRequestID;
    _Bool _shouldUpdateNavigationBar;
}

- (void).cxx_destruct;
- (void)LBSPOICustomLBSLocationStringV2:(id)arg1 POIInfoiType:(int)arg2 POIInfoStUsrLociLat:(long long)arg3 POIInfoStUsrLociLon:(long long)arg4 POIInfoStrPoiId:(id)arg5;
- (void)LBSPOISelectedPOIInfoStrAddress:(id)arg1 POIInfoStrName:(id)arg2 POIInfoiType:(int)arg3 POIInfoStUsrLociLat:(long long)arg4 POIInfoStUsrLociLon:(long long)arg5 POIInfoStrPoiId:(id)arg6;
- (id)bottomBarArray;
- (id)createLBSPOIViewController;
- (void)dealloc;
- (void)initNotificationObservers:(id)arg1;
- (_Bool)isQualifiedLat:(double)arg1 Lon:(double)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)onClickPoiModify:(id)arg1;
- (void)onEditClickPoiModify:(id)arg1;
- (int)onNotifyModifyTravelScene:(id)arg1;
- (void)poiModifyDidSelectPoiArea:(id)arg1;
- (void)poiModifyDidSelectSearchPoiInfoStrAddress:(id)arg1 POIInfoStrName:(id)arg2 POIInfoiType:(int)arg3 POIInfoStUsrLociLat:(long long)arg4 POIInfoStUsrLociLon:(long long)arg5 POIInfoStrPoiId:(id)arg6 POIAreaSceneryName:(id)arg7;
- (_Bool)requestModifyTravelScene:(id)arg1 modifyModelArray:(id)arg2;
- (void)updateParamForChild:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

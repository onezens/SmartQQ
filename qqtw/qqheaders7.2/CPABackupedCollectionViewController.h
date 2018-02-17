//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WYPhotoCollectionViewController.h"

#import "ActionSheetDataDelegate.h"
#import "CPACollectionReusableHeaderDelegate.h"
#import "CPAGuideViewControllerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WYCollectionBackupBarDelegate.h"

@class DataForActionSheetShareItem, NSCalendar, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, QQWebShareActionSheet, UIBarButtonItem, UIView;

@interface CPABackupedCollectionViewController : WYPhotoCollectionViewController <CPACollectionReusableHeaderDelegate, ActionSheetDataDelegate, UIActionSheetDelegate, UIAlertViewDelegate, CPAGuideViewControllerDelegate, QQMultiImagePickerControllerDelegate, WYCollectionBackupBarDelegate>
{
    _Bool _fromQZone;
    _Bool _uploadFinishedWillRefresh;
    long long _nowYear;
    NSMutableDictionary *_poiCacheDict;
    long long _photoCount;
    long long _videoCount;
    NSMutableSet *_yearSet;
    double _sectionMaxDistance;
    NSObject<OS_dispatch_queue> *_mixQueue;
    QQWebShareActionSheet *_actionSheet;
    DataForActionSheetShareItem *_shareData;
    UIView *_weiyunVipView;
    UIView *_openAppView;
    NSCalendar *_calendar;
    UIBarButtonItem *_moreItemDefault;
}

@property(retain, nonatomic) QQWebShareActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)beginLoadData:(_Bool)arg1;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)cameraRollWithPhotoOnly:(id)arg1;
- (void)doDeleteItem;
- (void)downloadSelectedItems;
@property(nonatomic, getter=isFromQZone) _Bool fromQZone; // @synthesize fromQZone=_fromQZone;
- (void)loadPOI:(id)arg1 withKey:(id)arg2 handle:(CDUnknownBlockType)arg3;
- (void)mixPhotoAndVideoDataWithFiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mixQueue; // @synthesize mixQueue=_mixQueue;
@property(retain, nonatomic) UIBarButtonItem *moreItemDefault; // @synthesize moreItemDefault=_moreItemDefault;
@property(readonly, nonatomic) long long nowYear; // @synthesize nowYear=_nowYear;
@property(retain, nonatomic) UIView *openAppView; // @synthesize openAppView=_openAppView;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(readonly, retain, nonatomic) NSMutableDictionary *poiCacheDict; // @synthesize poiCacheDict=_poiCacheDict;
@property(nonatomic) double sectionMaxDistance; // @synthesize sectionMaxDistance=_sectionMaxDistance;
@property(retain, nonatomic) DataForActionSheetShareItem *shareData; // @synthesize shareData=_shareData;
@property(nonatomic) _Bool uploadFinishedWillRefresh; // @synthesize uploadFinishedWillRefresh=_uploadFinishedWillRefresh;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(retain, nonatomic) UIView *weiyunVipView; // @synthesize weiyunVipView=_weiyunVipView;
- (void)shareItemAction:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableSet *yearSet; // @synthesize yearSet=_yearSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


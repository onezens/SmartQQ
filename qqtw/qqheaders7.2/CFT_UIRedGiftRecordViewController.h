//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "TPPickerSheetDelegate.h"
#import "UIRedGiftRecordViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISegmentViewDelegate.h"

@class CFT_TPPickerSheet, CFT_UIRedGiftRecordView, CFT_UISegmentView, NSMutableArray, NSMutableDictionary, NSString;

@interface CFT_UIRedGiftRecordViewController : CFT_UICustomNaviBarViewController <UIScrollViewDelegate, TPPickerSheetDelegate, UIRedGiftRecordViewDelegate, UISegmentViewDelegate>
{
    CFT_UISegmentView *_segment;
    CFT_UIRedGiftRecordView *_sendRecordView;
    CFT_UIRedGiftRecordView *_recvRecordView;
    CFT_TPPickerSheet *_yearPicker;
    NSMutableArray *_yearArray;
    NSString *_curYear;
    NSMutableDictionary *_recordCache;
    _Bool _isSendRecordTab;
    _Bool _isSendDataLoading;
    _Bool _isRecvDataLoading;
    long long _limitCount;
    long long _removeRecordIndex;
    _Bool _isNeedCallBack;
    NSString *_uin;
    NSString *_nick;
    NSString *_qq_skey;
    NSString *_qq_skey_type;
    NSString *_appinfo;
    NSString *_comefrom;
    NSString *_groupid;
    NSString *_grouptype;
    NSString *_tabIndex;
}

@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
- (void)dealloc;
@property(retain, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(retain, nonatomic) NSString *grouptype; // @synthesize grouptype=_grouptype;
@property(nonatomic) _Bool isNeedCallBack; // @synthesize isNeedCallBack=_isNeedCallBack;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *qq_skey; // @synthesize qq_skey=_qq_skey;
@property(retain, nonatomic) NSString *qq_skey_type; // @synthesize qq_skey_type=_qq_skey_type;
@property(retain, nonatomic) NSString *tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


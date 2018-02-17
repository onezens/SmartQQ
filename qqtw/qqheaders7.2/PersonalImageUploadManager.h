//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"

@class NSMutableDictionary, NSString, USPersonalTagModel;

@interface PersonalImageUploadManager : NSObject <BDHUploadDelegate>
{
    unsigned long long _tagID;
    id <PersonalImageUploadDelegate> _delegate;
    USPersonalTagModel *_tagModel;
    NSMutableDictionary *_uploadPhotosDict;
    NSMutableDictionary *_imageDict;
    NSMutableDictionary *_labelInfoRowDict;
    NSMutableDictionary *_totolCountDict;
    NSMutableDictionary *_indexDict;
    NSMutableDictionary *_serverTimeDict;
    NSMutableDictionary *_taskIdDict;
    NSMutableDictionary *_imageCachePathDict;
    NSMutableDictionary *_isSingleDict;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clearTagModel;
- (id)cookieIncrement:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <PersonalImageUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (id)filterUrl:(id)arg1 isOriginal:(_Bool)arg2;
@property(retain, nonatomic) NSMutableDictionary *imageCachePathDict; // @synthesize imageCachePathDict=_imageCachePathDict;
@property(retain, nonatomic) NSMutableDictionary *imageDict; // @synthesize imageDict=_imageDict;
@property(retain, nonatomic) NSMutableDictionary *indexDict; // @synthesize indexDict=_indexDict;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *isSingleDict; // @synthesize isSingleDict=_isSingleDict;
@property(retain, nonatomic) NSMutableDictionary *labelInfoRowDict; // @synthesize labelInfoRowDict=_labelInfoRowDict;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHProgress:(long long)arg1 uploadDetail:(id)arg2 progress:(float)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)removeCacheWithTaskId:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *serverTimeDict; // @synthesize serverTimeDict=_serverTimeDict;
@property(retain, nonatomic) USPersonalTagModel *tagModel; // @synthesize tagModel=_tagModel;
@property(retain, nonatomic) NSMutableDictionary *taskIdDict; // @synthesize taskIdDict=_taskIdDict;
@property(retain, nonatomic) NSMutableDictionary *totolCountDict; // @synthesize totolCountDict=_totolCountDict;
@property(retain, nonatomic) NSMutableDictionary *uploadPhotosDict; // @synthesize uploadPhotosDict=_uploadPhotosDict;
- (void)uploadFailWithTaskId:(long long)arg1;
- (void)uploadImage:(id)arg1 tagIdStr:(id)arg2;
- (void)uploadImages:(id)arg1 tagID:(unsigned long long)arg2 tagModel:(id)arg3 selectedLabelInfoRow:(unsigned long long)arg4 selectedImageIndex:(unsigned long long)arg5;
- (void)uploadNextWithTagID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


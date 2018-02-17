//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUploadPOI.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZExifInfo, QZJFileUploadMultiPicInfo, QZJFileUploadPicUploadControlInfo, QZJFileUploadUploadPicInfoReq;

@interface QZUploadPhoto : QZUploadPOI
{
    NSString *_albumId;
    long long _albumType;
    NSMutableArray *_quans;
    QZExifInfo *_exifInfo;
    NSMutableDictionary *_mapExt;
    long long _bussiType;
    NSData *_bussiData;
    NSString *_userDefineSource;
    NSDictionary *_stExtendInfoMapParams;
    QZJFileUploadPicUploadControlInfo *_picControlInfo;
    QZJFileUploadUploadPicInfoReq *_picInfoReq;
    QZJFileUploadMultiPicInfo *_multiPicInfo;
    long long rolation;
    NSMutableDictionary *_externalMapExt;
    NSString *_videoId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(nonatomic) long long albumType; // @synthesize albumType=_albumType;
@property(retain, nonatomic) NSData *bussiData; // @synthesize bussiData=_bussiData;
@property(nonatomic) long long bussiType; // @synthesize bussiType=_bussiType;
@property(retain, nonatomic) QZExifInfo *exifInfo; // @synthesize exifInfo=_exifInfo;
@property(retain, nonatomic) NSMutableDictionary *externalMapExt; // @synthesize externalMapExt=_externalMapExt;
- (id)getControlDataWithError:(id *)arg1;
- (id)init;
- (void)initBusiData_OC:(id)arg1;
- (void)initPictureExif_OC:(id)arg1;
- (void)initPicturePOIInfo_OC:(id)arg1;
- (void)initUploadPicExtendInfo_OC:(id)arg1;
- (void)initUploadPicInfo_OC:(id)arg1;
- (id)ipMgrKey;
@property(retain, nonatomic) NSMutableDictionary *mapExt; // @synthesize mapExt=_mapExt;
@property(retain, nonatomic) QZJFileUploadMultiPicInfo *multiPicInfo; // @synthesize multiPicInfo=_multiPicInfo;
- (id)packetRespWithRspData:(id)arg1;
@property(retain, nonatomic) QZJFileUploadUploadPicInfoReq *picInfoReq; // @synthesize picInfoReq=_picInfoReq;
@property(nonatomic) long long rolation; // @synthesize rolation;
- (void)setFilePath:(id)arg1;
@property(retain, nonatomic) NSDictionary *stExtendInfoMapParams; // @synthesize stExtendInfoMapParams=_stExtendInfoMapParams;
@property(retain, nonatomic) NSString *userDefineSource; // @synthesize userDefineSource=_userDefineSource;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (id)sliceUploadAppId;

@end


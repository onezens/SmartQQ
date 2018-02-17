//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQARConfigModel, QQARDownloadTool;

@interface QQARDownloadManager : NSObject
{
    QQARDownloadTool *_mDownloadTool;
    QQARDownloadTool *_mDownloadToolCloud;
    double _downloadPercent;
    double _downloadPercentCloud;
    _Bool _isDownloading;
    _Bool _isDownloadingCloud;
    id <ARDownloadTaskDelegate> _delegate;
    QQARConfigModel *_downloadingConfigModel;
    QQARConfigModel *_downloadingConfigModelCloud;
}

+ (id)get3DResourceDir:(id)arg1;
+ (id)get3DResourceUnzipDir:(id)arg1 isOld:(_Bool)arg2;
+ (id)get3DResourceUnzipDirByFeatureModel:(id)arg1 isOld:(_Bool)arg2;
+ (id)getARVideoFilePath:(id)arg1;
+ (id)getARVideoFilePathByFeatureModel:(id)arg1;
+ (id)getARVideoFilePathByFeatureModel:(id)arg1 md5:(id)arg2;
+ (id)getBusinessBanner:(id)arg1;
+ (id)getBusinessLogo:(id)arg1;
+ (id)getFeatureDir:(id)arg1;
+ (id)getInstance;
+ (id)getNameFromModelConfig:(id)arg1;
+ (id)getPathByFeatureModel:(id)arg1;
+ (id)getResourceMD5FromModelConfig:(id)arg1;
+ (id)getResourcePath:(id)arg1 md5:(id)arg2;
+ (unsigned long long)getResourceSize:(id)arg1;
+ (id)getSubDirName:(id)arg1;
+ (id)getZipPathBy3DResModel:(id)arg1;
+ (_Bool)isNeadDownloadARResources:(id)arg1;
+ (_Bool)isUnZipFilesInvalid:(id)arg1 unzipDir:(id)arg2;
- (void).cxx_destruct;
- (void)clearDownloadData:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <ARDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downLoadARResources:(id)arg1 needDownloadFeatureRes:(_Bool *)arg2 needDownload3DRes:(_Bool *)arg3 needDownloadMultiVideoRes:(_Bool *)arg4 needUnzip3DRes:(_Bool *)arg5 isOnLogin:(_Bool)arg6;
- (void)downLoadAllResources:(id)arg1 success:(CDUnknownBlockType)arg2 featureSuccess:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4 forceDownload:(_Bool)arg5;
- (void)downLoadAllResourcesOnLogin:(id)arg1;
- (void)downLoadScanIConResources:(id)arg1;
- (void)downloadARResourceFile:(id)arg1;
- (_Bool)downloadArResourceOnScaning:(id)arg1;
@property(retain, nonatomic) QQARConfigModel *downloadingConfigModel; // @synthesize downloadingConfigModel=_downloadingConfigModel;
@property(retain, nonatomic) QQARConfigModel *downloadingConfigModelCloud; // @synthesize downloadingConfigModelCloud=_downloadingConfigModelCloud;
- (id)getDownloadTask:(id)arg1 baseModel:(id)arg2 isNeedDownload:(_Bool)arg3;
- (id)getNotiProgressDict:(id)arg1 downloadUrl:(id)arg2 percentage:(double)arg3 hasDownloadSize:(float)arg4 totalSize:(float)arg5;
- (id)getNotiResultDict:(id)arg1 downloadUrl:(id)arg2;
- (id)init;
- (void)initDownloadNotificationCallBack;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) _Bool isDownloadingCloud; // @synthesize isDownloadingCloud=_isDownloadingCloud;
- (_Bool)isNeedDownload3DRes:(id)arg1;
- (_Bool)isNeedDownloadFeatureRes:(id)arg1;
- (_Bool)isNeedDownloadManyVideoRes:(id)arg1;
- (_Bool)isNeedUnzip3DRes:(id)arg1;
@property(retain, nonatomic) QQARDownloadTool *mDownloadTool; // @synthesize mDownloadTool=_mDownloadTool;
@property(retain, nonatomic) QQARDownloadTool *mDownloadToolCloud; // @synthesize mDownloadToolCloud=_mDownloadToolCloud;
- (_Bool)needDownloadArResource:(id)arg1;
- (void)postDownloadingFailNotification:(id)arg1 error:(id)arg2 isCloud:(_Bool)arg3;
- (void)postDownloadingFailNotificationWithErrorCode:(id)arg1 errorCode:(long long)arg2 isCloud:(_Bool)arg3;
- (void)postDownloadingProgressNotification:(id)arg1;
- (void)reportArCloudDownloadAllTask:(_Bool)arg1;
- (void)reportArSingleFileDownloadSuccessRateCloud:(id)arg1 success:(_Bool)arg2 failedCode:(long long)arg3;
- (void)revertReportModel:(id)arg1;
- (void)stopDownload:(_Bool)arg1;
- (void)unzipExistFile:(id)arg1;
- (_Bool)unzipFile:(id)arg1 toFolder:(id)arg2 fileInfoDic:(id)arg3;

@end

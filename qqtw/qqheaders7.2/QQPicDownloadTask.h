//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseDownloadTask.h"

@class NSMutableData, NSString, PicDecrypt, ProgressiveJpgDownloadingInfo, RichMediaTransferProgressInfo;

@interface QQPicDownloadTask : QQBaseDownloadTask
{
    _Bool _isNeedEncryptImage;
    _Bool _isNeedSvrEncryptImageData;
    _Bool _isNeedEncryptImageDownloadUrl;
    unsigned int _atleastDownloadLen;
    unsigned int _atleastShowLen;
    int _picSize;
    int _httpStatusCode;
    unsigned long long _getPicSizeType;
    long long _eDownloadMode;
    unsigned long long _msgTime;
    unsigned long long _imgFileType;
    PicDecrypt *_picDecrypt;
    unsigned long long _leftDownloadDataLen;
    unsigned long long _localFileSize;
    unsigned long long _duplicateDownloadDataLen;
    RichMediaTransferProgressInfo *_progressInfo;
    ProgressiveJpgDownloadingInfo *_progressiveJpgInfo;
    NSMutableData *_responseData;
    NSString *_trackUuid;
}

- (long long)actualStartPositionOfDownloadData:(id)arg1 compareHasDownloadDataSize:(id)arg2;
@property(nonatomic) unsigned int atleastDownloadLen; // @synthesize atleastDownloadLen=_atleastDownloadLen;
@property(nonatomic) unsigned int atleastShowLen; // @synthesize atleastShowLen=_atleastShowLen;
- (void)cancelOnRequestThread;
- (_Bool)checkEncryptImage;
- (_Bool)checkInvalidRedirectError:(id)arg1;
- (_Bool)checkResumeBrokenDl;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)didFailWithErrorOnRequestThread:(id)arg1;
- (void)didReceiveDataOnRequestThread:(id)arg1;
- (void)didReceiveResponseOnRequestThread:(id)arg1;
@property(nonatomic) unsigned long long duplicateDownloadDataLen; // @synthesize duplicateDownloadDataLen=_duplicateDownloadDataLen;
@property(nonatomic) long long eDownloadMode; // @synthesize eDownloadMode=_eDownloadMode;
- (_Bool)encryptDownloadUrl;
- (_Bool)encryptPicData:(id)arg1;
- (id)getDownloadData;
- (id)getHttpCookieHeaders:(id)arg1;
- (float)getPicDownloadProcess;
@property(nonatomic) unsigned long long getPicSizeType; // @synthesize getPicSizeType=_getPicSizeType;
- (id)getReportUUid;
@property(nonatomic) int httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(nonatomic) unsigned long long imgFileType; // @synthesize imgFileType=_imgFileType;
- (id)init;
@property(nonatomic) _Bool isNeedEncryptImage; // @synthesize isNeedEncryptImage=_isNeedEncryptImage;
@property(nonatomic) _Bool isNeedEncryptImageDownloadUrl; // @synthesize isNeedEncryptImageDownloadUrl=_isNeedEncryptImageDownloadUrl;
@property(nonatomic) _Bool isNeedSvrEncryptImageData; // @synthesize isNeedSvrEncryptImageData=_isNeedSvrEncryptImageData;
@property unsigned long long leftDownloadDataLen; // @synthesize leftDownloadDataLen=_leftDownloadDataLen;
@property unsigned long long localFileSize; // @synthesize localFileSize=_localFileSize;
- (_Bool)mosaicPicData:(id)arg1;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) PicDecrypt *picDecrypt; // @synthesize picDecrypt=_picDecrypt;
@property int picSize; // @synthesize picSize=_picSize;
@property(retain, nonatomic) RichMediaTransferProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(retain, nonatomic) ProgressiveJpgDownloadingInfo *progressiveJpgInfo; // @synthesize progressiveJpgInfo=_progressiveJpgInfo;
- (void)reportBrokenDl:(_Bool)arg1;
- (void)reportImageDecode:(_Bool)arg1;
- (void)reportImageDecryptError:(id)arg1;
@property(retain) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (_Bool)runHttpGetImageAgain;
- (void)saveOfflinePicFileData:(_Bool)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)sessionDidFinishLoading:(id)arg1;
- (void)sessionDidFinishLoadingOnRequestThread:(id)arg1;
@property(retain, nonatomic) NSString *trackUuid; // @synthesize trackUuid=_trackUuid;
- (void)startDownload;
- (void)startDownloadConnection:(id)arg1;
- (void)startDownloadOnThread;
- (id)truncateValidDataByReceiveData:(id)arg1;

@end


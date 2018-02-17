//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@interface qfMsgModel : FAModel
{
    struct qfDataConext_ *_dc;
    struct qfMsgModel_ *_inst;
}

- (id)actInformation;
- (int)cDestFileType;
- (void)cDestFileType:(int)arg1;
- (int)cFileMediaType;
- (void)cFileMediaType:(int)arg1;
- (int)cFileTransferStatus;
- (void)cFileTransferStatus:(int)arg1;
- (int)cOperationType;
- (void)cOperationType:(int)arg1;
- (int)cSourceFileType;
- (void)cSourceFileType:(int)arg1;
- (void)dealloc;
- (_Bool)getValid;
- (id)initWithCxt:(struct qfDataConext_ *)arg1 withInstance:(struct qfMsgModel_ *)arg2;
@property(readonly) struct qfMsgModel_ *inst; // @synthesize inst=_inst;
- (_Bool)isSend;
- (void)msgModel:(id)arg1;
- (void)setbeCancel;
- (id)strFileName;
- (void)strFileName:(id)arg1;
- (id)strFileUrl;
- (void)strFileUrl:(id)arg1;
- (id)strMD5;
- (void)strMD5:(id)arg1;
- (id)strPeerNick;
- (void)strPeerNick:(id)arg1;
- (id)strSmallThumbnailPath;
- (void)strThumbnailPath:(id)arg1;
- (unsigned long long)uFileSize;
- (void)uFileSize:(unsigned long long)arg1;
- (unsigned long long)uJobID;
- (void)uJobID:(unsigned long long)arg1;
- (unsigned long long)uMsgID;
- (void)uMsgID:(unsigned long long)arg1;
- (unsigned long long)uOutdatedTime;
- (void)uOutdatedTime:(unsigned long long)arg1;
- (unsigned long long)uPeerUin;
- (void)uPeerUin:(unsigned long long)arg1;
- (float)uProgress;
- (void)uProgress:(float)arg1;
- (unsigned long long)uSelfUin;
- (void)uSelfUin:(unsigned long long)arg1;
- (unsigned long long)uSvrTime;
- (void)uSvrTime:(unsigned long long)arg1;
- (unsigned long long)uWeiyunMtime;
- (void)uWeiyunMtime:(unsigned long long)arg1;

@end

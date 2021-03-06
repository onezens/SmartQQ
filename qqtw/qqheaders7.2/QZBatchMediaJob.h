//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseJob.h"

@class NSArray, NSString, QZTaskLbsInfo;

@interface QZBatchMediaJob : QZBaseJob
{
    unsigned long long _batchMedisSource;
    NSString *_preUploadId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long batchMedisSource; // @synthesize batchMedisSource=_batchMedisSource;
@property(copy, nonatomic) NSString *preUploadId; // @synthesize preUploadId=_preUploadId;

// Remaining properties
@property(copy, nonatomic) NSString *albumID; // @dynamic albumID;
@property(copy, nonatomic) NSString *albumName; // @dynamic albumName;
@property(nonatomic) long long albumType; // @dynamic albumType;
@property(nonatomic) long long batchMJType; // @dynamic batchMJType;
@property(nonatomic) long long compressBatchID; // @dynamic compressBatchID;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) QZTaskLbsInfo *lbsInfo; // @dynamic lbsInfo;
@property(retain, nonatomic) NSArray *mediaJobs; // @dynamic mediaJobs;
@property(nonatomic) long long photoQuality; // @dynamic photoQuality;
@property(copy, nonatomic) NSString *refer; // @dynamic refer;
@property(copy, nonatomic) NSString *reportString; // @dynamic reportString;
@property(nonatomic) long long totalMediaCount; // @dynamic totalMediaCount;
@property(nonatomic) long long uploadBatchID; // @dynamic uploadBatchID;
@property(nonatomic) long long uploadEntrance; // @dynamic uploadEntrance;
@property(nonatomic) long long videoQuality; // @dynamic videoQuality;

@end


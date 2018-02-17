//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface ArtisticFilterReport : NSObject
{
    _Bool _isuploadOriginalPic;
    unsigned long long _uploadFileSize;
    unsigned long long _downloadFileSize;
    long long _errorcode;
    unsigned long long _step;
    unsigned long long _filterId;
    NSDate *_start_time;
    NSDate *_wup_Costtime;
    NSDate *_original_Costtime;
    NSDate *_filter_Costtime;
    NSDate *_download_Costtime;
    unsigned long long _teg_Costtime;
    unsigned long long _detailPic_Costtime;
    unsigned long long _all_Costtime;
    unsigned long long _current_TaskCount;
}

+ (id)AFReportParameters:(id)arg1;
+ (id)printDate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long all_Costtime; // @synthesize all_Costtime=_all_Costtime;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long current_TaskCount; // @synthesize current_TaskCount=_current_TaskCount;
@property(nonatomic) unsigned long long detailPic_Costtime; // @synthesize detailPic_Costtime=_detailPic_Costtime;
@property(nonatomic) unsigned long long downloadFileSize; // @synthesize downloadFileSize=_downloadFileSize;
@property(retain, nonatomic) NSDate *download_Costtime; // @synthesize download_Costtime=_download_Costtime;
@property(nonatomic) long long errorcode; // @synthesize errorcode=_errorcode;
@property(nonatomic) unsigned long long filterId; // @synthesize filterId=_filterId;
@property(retain, nonatomic) NSDate *filter_Costtime; // @synthesize filter_Costtime=_filter_Costtime;
@property(nonatomic) _Bool isuploadOriginalPic; // @synthesize isuploadOriginalPic=_isuploadOriginalPic;
@property(retain, nonatomic) NSDate *original_Costtime; // @synthesize original_Costtime=_original_Costtime;
@property(retain, nonatomic) NSDate *start_time; // @synthesize start_time=_start_time;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(nonatomic) unsigned long long teg_Costtime; // @synthesize teg_Costtime=_teg_Costtime;
@property(nonatomic) unsigned long long uploadFileSize; // @synthesize uploadFileSize=_uploadFileSize;
@property(retain, nonatomic) NSDate *wup_Costtime; // @synthesize wup_Costtime=_wup_Costtime;

@end


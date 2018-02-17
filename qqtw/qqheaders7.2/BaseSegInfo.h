//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"

@class NSDictionary, NSString;

@interface BaseSegInfo : NSObject <BDHUploadDelegate>
{
    int _index;
    int _fileSize;
    NSString *_filePath;
    NSString *_fileMd5;
    unsigned long long _segState;
    long long _taskId;
    NSDictionary *_uploadDetail;
}

- (void)dealloc;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int index; // @synthesize index=_index;
- (id)init;
@property(nonatomic) unsigned long long segState; // @synthesize segState=_segState;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSDictionary *uploadDetail; // @synthesize uploadDetail=_uploadDetail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


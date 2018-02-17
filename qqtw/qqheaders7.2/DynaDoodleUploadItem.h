//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DoodleFileUploader, NSString;

@interface DynaDoodleUploadItem : NSObject
{
    unsigned int _fileOffset;
    unsigned int _gifId;
    NSString *_filePath;
    id <DynaDoodleAIODelegate> _aioDelegate;
    DoodleFileUploader *_uploader;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DynaDoodleAIODelegate> aioDelegate; // @synthesize aioDelegate=_aioDelegate;
@property(nonatomic) unsigned int fileOffset; // @synthesize fileOffset=_fileOffset;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned int gifId; // @synthesize gifId=_gifId;
- (id)init;
@property(retain, nonatomic) DoodleFileUploader *uploader; // @synthesize uploader=_uploader;

@end


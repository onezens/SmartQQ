//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FAPreviewConfigInfo : NSObject
{
    int _previewMode;
    int _fileType;
    NSString *_interfacePage;
    NSString *_httpsInterfacePage;
}

- (void)dealloc;
- (id)description;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *httpsInterfacePage; // @synthesize httpsInterfacePage=_httpsInterfacePage;
- (id)initWithPage:(id)arg1 mode:(int)arg2 type:(int)arg3;
@property(retain, nonatomic) NSString *interfacePage; // @synthesize interfacePage=_interfacePage;
@property(nonatomic) int previewMode; // @synthesize previewMode=_previewMode;

@end


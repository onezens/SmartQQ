//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ARBusinessConfigManager : NSObject
{
    NSString *_rootPath;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)checkDownload:(id)arg1 Complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)downloadARBusinessResource:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (id)getResourcePath:(id)arg1;
- (id)init;
- (_Bool)isResourcesAllExist:(id)arg1;
- (_Bool)resourceIsExist:(id)arg1;

@end

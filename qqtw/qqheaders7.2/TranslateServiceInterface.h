//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface TranslateServiceInterface : NSObject
{
    int mAPI;
    NSLock *mLock;
}

+ (id)getInstance;
- (void)TaskWithBin:(id)arg1;
- (void)TaskWithGoogle:(id)arg1;
- (void)dealloc;
- (id)getDestLan;
- (int)getTranslateServiceMode;
- (id)getTranslateStringArrayFromWebService:(id)arg1 modearg:(int)arg2 tranarg:(_Bool *)arg3 otherarg:(id *)arg4;
- (id)getTranslateStringArrayFromWebServiceWithDefaultMode:(id)arg1 tranarg:(_Bool *)arg2 otherarg:(id *)arg3;
- (id)getTranslateStringFromWebService:(id)arg1 modearg:(int)arg2 tranarg:(_Bool *)arg3;
- (id)init;

@end


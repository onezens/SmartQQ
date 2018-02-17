//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArkAppCGIQueryTask.h"

@class NSMutableArray, NSString;

@interface ArkAppCGIQueryTask_GetContextActionAppList : ArkAppCGIQueryTask
{
    NSString *_context;
    NSString *_action;
    unsigned long long _appID;
    unsigned long long _grayAppID;
    NSMutableArray *_appList;
    NSMutableArray *_grayAppList;
}

- (void).cxx_destruct;
@property(copy) NSString *action; // @synthesize action=_action;
@property unsigned long long appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSMutableArray *appList; // @synthesize appList=_appList;
@property(copy) NSString *context; // @synthesize context=_context;
- (void)doCallback;
@property unsigned long long grayAppID; // @synthesize grayAppID=_grayAppID;
@property(readonly, nonatomic) NSMutableArray *grayAppList; // @synthesize grayAppList=_grayAppList;
- (id)init;

@end


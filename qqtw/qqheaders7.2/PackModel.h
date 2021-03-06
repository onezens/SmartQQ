//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PackModel : NSObject
{
    _Bool _expired;
    _Bool _locked;
    _Bool _follow;
    _Bool _empty;
    _Bool _provider_dead;
    unsigned int _state;
    unsigned int _type;
    unsigned int _ctime;
    unsigned int _etime;
    unsigned int _money;
    unsigned int _business;
    int _group_type;
    int _group_id;
    int _promotion_id;
    int _user_apn;
    int _appid;
    int _mtime;
    NSString *_pack_id;
    NSString *_signature;
    NSString *_url;
    unsigned long long _peer_uin;
    NSString *_peer_nick;
    long long _uin;
    NSString *_user_ip;
}

- (void).cxx_destruct;
@property(nonatomic) int appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned int business; // @synthesize business=_business;
@property(nonatomic) unsigned int ctime; // @synthesize ctime=_ctime;
- (id)description;
@property(nonatomic) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) unsigned int etime; // @synthesize etime=_etime;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(nonatomic) _Bool follow; // @synthesize follow=_follow;
@property(nonatomic) int group_id; // @synthesize group_id=_group_id;
@property(nonatomic) int group_type; // @synthesize group_type=_group_type;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic) unsigned int money; // @synthesize money=_money;
@property(nonatomic) int mtime; // @synthesize mtime=_mtime;
@property(copy, nonatomic) NSString *pack_id; // @synthesize pack_id=_pack_id;
@property(copy, nonatomic) NSString *peer_nick; // @synthesize peer_nick=_peer_nick;
@property(nonatomic) unsigned long long peer_uin; // @synthesize peer_uin=_peer_uin;
@property(nonatomic) int promotion_id; // @synthesize promotion_id=_promotion_id;
@property(nonatomic) _Bool provider_dead; // @synthesize provider_dead=_provider_dead;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int user_apn; // @synthesize user_apn=_user_apn;
@property(copy, nonatomic) NSString *user_ip; // @synthesize user_ip=_user_ip;

@end

